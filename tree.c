#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "tree.h"

/* This function creates a new type name data record and install it in the symbol table.
 * It take two parameters; the name of the type name as a char array, and a type object.
 * If the type name is already installed in the symbol table a warning message is issued.
 */

void create_typename(ST_ID id,TYPE new_type)
{
	ST_DR new_data_rec;
	new_data_rec= stdr_alloc();

	//Fill the fields of the new symbol table data record
	new_data_rec->tag=TYPENAME;
	new_data_rec->u.typename.type=new_type;

	// Install the new data record in the symbol table
	if (!st_install(id,new_data_rec)) {
		// Issue an error message 
		error("This Type name is already installed");
	}

}

void create_gdecl(VAR_ID_LIST list,TYPE type)
{
       //checking if the variable has a type 
	if (ty_query(type) == TYFUNC) {
		error("Variable(s) must be of data type");
		
	}

	ST_DR new_data_rec;

	while(list!=NULL)
	{

		resolve_all_ptr();

		new_data_rec = stdr_alloc();

		// Fill the fields of the new symbol table data record
		new_data_rec->tag=GDECL;
		new_data_rec->u.decl.type=type;
		new_data_rec->u.decl.sc=NO_SC;
		new_data_rec->u.decl.is_ref=FALSE;
		new_data_rec->u.decl.err = (ty_query(type) == TYERROR ? TRUE : FALSE);


		// Install the new data record in the symbol table
		if (!st_install(list->id,new_data_rec)) {
			//writing an error message
			error("Duplicate variable declaration: \"%s\"", st_get_id_str(list->id));
			free(new_data_rec);
		}

               // simple_allocate_space(st_get_id_str(list->id), type);

		list=list->next;
	}
}


/* This function checks if an ST_ID is already installed in the symbol table as a typename typename,if the id was not installed an error is issued.
 * It take one parameter; an ST_ID.If the ID was NULL a bug is found.
 * As an output it returns a type object; if the error is issued then an error type is returned else the original type is returned.
 */
TYPE check_typename(ST_ID id) {
	
	ST_DR chcktype;
	int chck;

     //if the id is null then bug is found 
	if (id == NULL)
		bug("null id passed to \"st_install\"");

	if ((chcktype = st_lookup(id,&chck)) == NULL) {
		error("Undeclared type name: \"%s\"", st_get_id_str(id));
		return ty_build_basic(TYERROR);
	}

	return chcktype->u.typename.type;
	
}

/* This function checks if the second index of the subrange is larger than the first, then it buids the subrange type.
 * It take two parameters; both an int representing the first and second indexes. 
 * As an output it returns a type object; if the error is issued then an error type is returned else the original type is returned.
 */
/*TYPE check_subrange(long a, long b) {
	if (a < b) {
		return ty_build_subrange(ty_build_basic(TYSIGNEDLONGINT), a, b);
	}
	//error("Invalid subrange %i .. %i", a, b);
	error("Empty subrange in array index");
	error("Illegal index type (ignored)");
	//return NULL;
	return ty_build_basic(TYERROR);
} */

/* This function checks a function type to see if it's a simple type.
 * It take one parameter; a type object.If the type was a function then an error message is issued.
 * As an output it returns a type object; if the error is issued then an error type is returned else the original type is returned.
 */
TYPE check_function_type(TYPE type) {
	if (ty_query(type) == TYERROR) {
		error("Error in the function return type");
		return ty_build_basic(TYERROR);
	}

	if (ty_query(type) == TYFUNC) {
		error("Function return type must be simple type");
		return type; 
	}

	if (ty_query(type) == TYARRAY) {
		error("Function return type must be simple type");
		return type; 
	}

	return type;
}

/* This function checks an array to see if it's element type is valid.
 * It takes two parameters; a type object,and an INDEX_LIST index_list.If the type was not in the symbol table then an
 error is issued .
 * As an output it returns a type object; if the error is issued then an error type is returned else an array type is returned.
 */

TYPE check_array(TYPE type, INDEX_LIST i) {
	if (ty_query(type) == TYERROR) {
		error("Data type expected for array elements");
		return ty_build_basic(TYERROR);
	}
	if (ty_query(type) == TYFUNC) {
		error("Data type expected for array elements");
		error("Variable(s) must be of data type");
		return ty_build_basic(TYERROR);
	}


	return ty_build_array(type, i);
}

/* build a variable id list by pushing new id to the front */

VAR_ID_LIST build_var_id_list (VAR_ID_LIST list,ST_ID id)
{
  VAR_ID_LIST id_list, temp_list;

  id_list = (VAR_ID_LIST) malloc(sizeof(VAR_ID));

  id_list->id = id;
  id_list->next = NULL;
 //checking if the list is empty 
  if (list!=NULL)
  {
       // pushing the list to the back of new id 
        id_list->next=list;

  }
 
  return id_list;
  
}

PARAM_LIST build_param_list(VAR_ID_LIST id_list,TYPE type,BOOLEAN value)
{
	//creates a parameter list from single type list of ids: a,b,c : Real
	VAR_ID_LIST id_ptr = id_list;
	PARAM_LIST head = NULL;
        PARAM_LIST new;

	while(id_ptr != NULL)
	{
          //adding values to the new id
	   new = (PARAM_LIST) malloc(sizeof(PARAM));
           new->id = id_ptr->id;
           new->type = type;
	   new->sc = NO_SC;
	   new->err = FALSE;
           new->is_ref = value;
	   new->prev = NULL;
	   new->next = NULL;
       
           new->next=head;
           head=new;
            //moving id_ptr to the next node 
            id_ptr = id_ptr->next;
	}

	return new;

}

PARAM_LIST check_param(PARAM_LIST p) 
{
	
	if (!p) bug("%s:%d check_params received a NULL pointer\n", __FILE__, __LINE__);
	if (!p->id) bug("%s:%d check_params received a pointer to NULL id\n", __FILE__, __LINE__);

	
	if (ty_query(p->type) == TYARRAY || ty_query(p->type) == TYFUNC) {
		error("Parameter type must be a simple type");
	}
	
	PARAM_LIST c = p->next;
	while (c) {
		if (!strcmp(st_get_id_str(p->id), st_get_id_str(c->id))) {
			// ids are identical, return null instead of duplicate
			error("Duplicate parameter name: \"%s\"", st_get_id_str(p->id));
		}
		if (ty_query(c->type) == TYARRAY || ty_query(c->type) == TYFUNC) {
			error("Parameter type must be a simple type");
		}
		c = c->next;
	}
	
	return p;
}

/* This function concatenates two parameter lists togather as one.
 * It takes two parameters,both are parameter lists.
 * As an output, it returns a parameter list that includes both of the input parameter lists.
 */

PARAM_LIST concatenate_param_list (PARAM_LIST list1,PARAM_LIST list2)
{
	if (!list1 && !list2) return NULL;	
	if (!list1) return list2;		
	if (!list2) return list1;		


	PARAM_LIST new_list;
	new_list=list1;
	while (new_list->next!=NULL)
	{
		new_list=new_list->next;
	}
	new_list->next=list2;
	return list1;
}

/* This function adds a new node at the end of an index list.
 * It takes two parameters,one is an index list, and the other is atype object.
 * As an output, it returns an index_list with the new node included.
 */

INDEX_LIST concatenate_index_lists (INDEX_LIST list1,TYPE type)
{
	INDEX_LIST ptr, list2;
	
	list2 = (INDEX_LIST) malloc(sizeof(INDEX));
	list2 = create_list_from_type(type);
	
	ptr=list1;
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = list2;
	return list1;

}

/* This function creates the index list for the arrays.
 * It takes one parameter,a type object; which should be a subrange.
 * As an output, it returns an index_list.
 */
INDEX_LIST create_list_from_type(TYPE type)
{
	if (ty_query(type) == TYERROR) return NULL;
	INDEX_LIST index;
	index=(INDEX_LIST) malloc(sizeof(INDEX));
	index->type=type;
	index->next=NULL;
	index->prev=NULL;
	return index;
}


/* This function traverse the linked list of unresolved pointers and resolves them..
 * It takes no parameter and returns nothing.
 * An error message is issued for every unresolved pointer.
 */

void resolve_all_ptr()
{
	int junk;
	ST_ID id;
	ST_DR data_rec;
	TYPE unresolved,temp,temp_ptr;

	unresolved=ty_get_unresolved();

	while(unresolved!=NULL)
	{
		temp_ptr = ty_query_ptr(unresolved, &id, &temp);
		data_rec = st_lookup(id,&junk);
		if (data_rec == NULL) {
			error("Unresolved type name: \"%s\"", st_get_id_str(id));
			unresolved = temp;
			continue;
		}
		if (data_rec->tag == TYPENAME)
		{
			if(!ty_resolve_ptr(unresolved, data_rec->u.typename.type))
				error("Unresolved type name: \"%s\"", st_get_id_str(id));
		}	
		else
		{
			error("Unidentified type tag\n");
		}
		unresolved=temp;
	}

}

/* This function will prepend an EXPR onto the front of an EXPR_LIST
 * Returns the altered EXPR_LIST list
 */
EXPR_LIST expr_prepend(EXPR expr, EXPR_LIST list) {
   EXPR_LIST alt_list;
   alt_list = (EXPR_LIST)malloc(sizeof(EXPR_LIST_NODE));

   alt_list->expr = expr;
   alt_list->next = NULL;

   //check if list is empty
   if (list != NULL) {
      //pushing the list to the end of alt_list
      alt_list->next = list;
   }

   return alt_list;
}

/* This function will reverse a list of EXPRs
 * Returns the reversed list 
 */
EXPR_LIST expr_list_reverse(EXPR_LIST list) {
   EXPR_LIST tmp;
   EXPR_LIST prev = NULL;

   while (list != NULL) {
      tmp = list->next;
      list->next = prev;
      prev = list;
      list = tmp;
   }
 
   return prev;
}

/* Function checks the TYPE, returns error if not a data type
 * If global decl: 
 *                install each id in the symbol tables as GDECL
 * If local decl:
 *               compute size/alignment of given TYPE
 *               decrease cur_offset to alignment
 *               for each id in list:
 *                   decrease cur_offset by size of TYPE
 *                   install id as LDECL
 * Returns altered value of cur_offset
 */
int process_var_decl(VAR_ID_LIST ids, TYPE type, int cur_offset) {
   int block;
   ST_DR data_block;
   ST_DR data_rec;

   //check type, it must by data type
   TYPETAG tag = ty_query(type);
   if (tag == TYFUNC) {
      error("Variable(s) must be of data type");
   }
   
   if (st_get_cur_block() > 1) { //global variables
      while (ids != NULL) {
         create_gdecl(ids, type);
      }
   }
   else { //local variables
      //compute size and alignment requirement
      int size = getSize(type);
      int alignment = size;

      //decrease cur_offset to the alignment
      if (tag == TYSIGNEDCHAR || tag == TYUNSIGNEDCHAR ){
         //no alignment changes
      }
      else {
         cur_offset = cur_offset - alignment;
         while (ids != NULL) {
            cur_offset = cur_offset - size;
            data_rec = stdr_alloc();
            data_rec->tag = LDECL;
            data_rec->u.decl.type = type;
            data_rec->u.decl.sc = NO_SC;
            data_rec->u.decl.is_ref = FALSE;
            data_rec->u.decl.v.offset = cur_offset;

            if (!st_install(ids->id, data_rec)) {
               error("Duplicate variable declaration: \"%s\"", st_get_id_str(ids->id));
               free(data_rec);
            } 

            ids = ids->next;
         }
      }
   }

   return cur_offset;
}

/* Function checks that both lo and hi are INTCONSTS of the same type,
 * also checks that the second index is larger than the first 
 * Returns new subrange type
 *
 * Previous check_subrange function took in long parameters
 */
TYPE check_subrange(EXPR lo, EXPR hi) {
   long low, high;

   // check if INTCONSTS
   if (lo->tag != INTCONST || hi->tag != INTCONST) {
      error("Subrange indexs are not Integers");
      return ty_build_basic(TYERROR);
   }

   // create new subrange type if lo < hi
   low = lo->u.intval;
   high = hi->u.intval;

   if (low < high) {
      return ty_build_subrange(ty_build_basic(TYSIGNEDLONGINT), low, high);
   }
   
   error("Empty subrange in array index");
   error("Illegal index type (ignored)");

   return ty_build_basic(TYERROR);
}


/* Function to build function declartion type and install into table */
void build_func_decl(ST_ID id, TYPE type, DIRECTIVE dir) {
   PARAM_LIST params;
   BOOLEAN check;
   TYPE returntype;

   // creates data record
   ST_DR data_rec;
   data_rec = stdr_alloc();
   data_rec->tag = GDECL;

   if (dir == DIR_EXTERNAL) {
      data_rec->u.decl.sc = EXTERN_SC;
      returntype = ty_query_func(type, &params, &check); //retrieve return type;
      data_rec->u.decl.type = ty_build_func(returntype, params, FALSE); //set check args to false and return new functype
   }
   else if (dir == DIR_FORWARD) {
      data_rec->u.decl.sc = NO_SC;
      data_rec->u.decl.type = type; //type is not altered
   }
   else {
      //othewise an invalid directive
     printf("invalid DIRECTIVE");
   }

   data_rec->u.decl.is_ref = FALSE;
   data_rec->u.decl.v.global_func_name = st_get_id_str(id);

   //install into symbol table
   if (!st_install(id,data_rec)) {
      //error message if doesn't work
      error("Duplicate forward or external function declaration");
      free(data_rec);
   }
}

/* Function to... */
int enter_function(ST_ID id, TYPE type, char *global_func_name) {
   ST_DR data_rec;
   PARAM_LIST param1, param2;
   BOOLEAN check1, check2;
   TYPE type1, type2;
   int block;	//current block
   int init_offset;

   //call st_lookup to see if id is previously installed in current block
   data_rec = st_lookup(id, &block);

   //if not previously installed then install as new FDECL
   if (data_rec == NULL) {
      data_rec = stdr_alloc();

      data_rec->tag = FDECL;
      data_rec->u.decl.type = type;
      data_rec->u.decl.sc = NO_SC;
      data_rec->u.decl.is_ref = FALSE;
      data_rec->u.decl.v.global_func_name = global_func_name;

      if (!st_install(id, data_rec)) {
         error("couldn't install");
         free(data_rec);
      }
   } 
   else {	//else if not installed
      //previous decl must be GDECL with same type and no_sc as storage class
      //check tag and storage class
      if (data_rec->tag != GDECL || data_rec->u.decl.sc != NO_SC) {
         //error
         error("error in enter_function(), no GDECL, no no_SC");
         return;
      } 
      else { //check types were the same
         //get return types
	 type1 = ty_query_func(type, &param1, &check1); //prev decl
         type2 = ty_query_func(data_rec->u.decl.type, &param2, &check2); //curr decl

         //check equality
         if (ty_test_equality(type1, type2) == TRUE) { //if same
            //change tag from GDECL to FDECL
            data_rec->tag = FDECL;
            data_rec->u.decl.v.global_func_name = global_func_name;
         }
         else { //not equal
            error("error in enter_function(), types not equal");
         }
      }
   } //installs id as a function with give function TYPE 

   //pushes id onto a global stack of function ids
   fi_top++; // increment stack
   func_id_stack[fi_top] = id; //set value
   //this will be used to detect return assignments within body of fcn

   //enter local scope of the function
   st_enter_block(); //informs symtab new block entered, increments cur block number

   //initiialize the formal parameter offset calculation
   b_init_formal_param_offset();//emits no assembly code

   //if local function
   if (st_get_cur_block() > 1) { //globals in block 1, predefined in block 0
      //first param is reference link (shadow parameter)
      b_get_formal_param_offset(TYPTR); //allocates 8bytes and sets return_value_offset to allocated space
   }
   
   //install each parameter (in order) as new PDECL with given TYPE
   install_params(param1);

   //get initial offset
   init_offset = b_get_local_var_offset();

   if (type1 == TYVOID) {
      init_offset = init_offset - 8; //if nonvoid, 8 is subtracted from offset
   }
   
   return init_offset;
}

/* Function to create a new INCTCONST node with given type and value
 * Returns new node
 */
EXPR make_intconst_expr(long val, TYPE type) {
   EXPR ret;
   ret = (EXPR)malloc(sizeof(EXPR_NODE));
   assert(ret != NULL);
   ret->tag = INTCONST;
   ret->type = type;
   ret->u.intval = val;
   return ret;
}

/* Function to create a new REALCONST node with TYDOUBLE type and value
 * Returns new node
 */
EXPR make_realconst_expr(double val) {
   EXPR ret;
   ret = (EXPR)malloc(sizeof(EXPR_NODE));
   assert(ret != NULL);
   ret->tag = REALCONST;
   ret->type = ty_build_basic(TYDOUBLE);
   ret->u.realval = val;
   return ret;
}

/* Function to create a new STRCONST node
 * Returns new node
 */
EXPR make_strconst_expr(char *str) {
   EXPR ret;
   ret = (EXPR)malloc(sizeof(EXPR_NODE));
   assert(ret != NULL);
   ret->tag = STRCONST;
   ret->type = ty_build_ptr(NULL, ty_build_basic(TYUNSIGNEDCHAR));
   ret->u.strval = str;
   return ret;
}  

/* Function to create a new nULLOP node with given op and TYPE depends on op
 * Retunrs new node
 */
EXPR make_null_expr(EXPR_NULLOP op) {
   EXPR ret;
   ret = (EXPR)malloc(sizeof(EXPR_NODE));
   assert(ret != NULL);
   ret->tag = NULLOP;
   ret->u.nullop.op = op;

   if (op == NIL_OP) {
      ret->type = ty_build_basic(TYVOID);
   }
   else if (op == NULL_EOF_OP || op == NULL_EOLN_OP) {
      ret->type = ty_build_basic(TYSIGNEDCHAR);
   }

   return ret;
}

/* Function checks to see if EXPR is l-value, can be done by looking
 * at tag and other information
 * Returns true if it does
 */
BOOLEAN is_lval(EXPR expr) {
   //fist check tag of expr
   if (expr->tag == LVAR) { //all LVARs are l-val
      return TRUE;
   }
   else if (expr->tag == GID) {
      if (ty_query(expr->type) == TYFUNC) { //l-val only if data type
         return FALSE;
      }
      else {
         return TRUE;
      }
   }
   else if (expr->tag == UNOP) {
      if (expr->u.unop.op == INDIR_OP) { //l-val if indirection op
         return TRUE;
      }
   }
   else {
      return FALSE;
   }
}

EXPR make_fcall_expr(EXPR func, EXPR_LIST args) {
   BOOLEAN check;
   PARAM_LIST param;
   TYPE ret_type;
   TYPETAG expr_type;
   EXPR_LIST aCopy = args; //copy of arg list
   EXPR_LIST bCopy = args; //another copy

   //check that func is of function type
   if (ty_query(func->type) != TYFUNC) {
      error("not functiontype");
      return make_error_expr();
   }

   //check check_args flag
   ret_type = ty_query_func(func->type, &param, &check);
   
   if (!check) { //likely an external function
      //make all arguments r-values and unary-convert         
      while (aCopy != NULL) {
         if (is_lval(aCopy->expr)) { //create a deref node
            make_un_expr(DEREF_OP, aCopy->expr);
         }

         //perform conversions
         expr_type = ty_query(aCopy->expr->type);
         if (expr_type == TYSIGNEDCHAR || expr_type == TYUNSIGNEDCHAR) {
            EXPR convertedNode = make_un_expr(CONVERT_OP, aCopy->expr);
            convertedNode->type = ty_build_basic(TYSIGNEDLONGINT);
         }
         else if (expr_type == TYFLOAT) {
            EXPR convertedNode = make_un_expr(CONVERT_OP, aCopy->expr);
            convertedNode->type = ty_build_basic(TYDOUBLE);
         }
         
         aCopy = aCopy->next;
      }
   }
   else { //check_args is true
      while (bCopy != NULL && param != NULL) {
         if (param->is_ref == TRUE) { //VAR parameter
            //actual arg must be an l-value whose type 
            //matches the type of the formal param
            if(ty_test_equality(bCopy->expr->type, param->type) == FALSE) {
               error("types not equal");
               return make_error_expr();
            }
         }
         else {
            //make actual arg an r-value
            if (is_lval(bCopy->expr) == TRUE) {
               make_un_expr(DEREF_OP, bCopy->expr);
            }
      
            //perfrom conversions
            expr_type = ty_query(bCopy->expr->type);
            if (expr_type == TYSIGNEDCHAR || expr_type == TYUNSIGNEDCHAR) {
               EXPR convertedNode = make_un_expr(CONVERT_OP, aCopy->expr);
               convertedNode->type = ty_build_basic(TYSIGNEDLONGINT);
            }
            else if (expr_type == TYFLOAT) {
               EXPR convertedNode = make_un_expr(CONVERT_OP, bCopy->expr);
               convertedNode->type = ty_build_basic(TYDOUBLE);
            }
         }

         //try to convert to type of formal parameter
      }
   }
   //check number formal args and param args and if differ then error

   //create an fcall node
   EXPR ret;
   ret = (EXPR)malloc(sizeof(EXPR_NODE));
   assert(ret != NULL);
   ret->tag = FCALL;
   ret->type = ret_type;
   ret->u.fcall.args = args;

   return ret;
}


/* function to install parameters, used in enter_function() 
 * local function
 */
void install_params(PARAM_LIST list) {
   long low,high;

   while (list != NULL) {
      //create symtab record
      ST_DR data_rec;
      data_rec = stdr_alloc();

      data_rec->tag = PDECL;	//parameters are installed as PDECL tag
      data_rec->u.decl.sc = list->sc;
      data_rec->u.decl.is_ref = list->is_ref;
      data_rec->u.decl.err = list->err;
      
      if (ty_query(list->type) == TYSUBRANGE) {
         data_rec->u.decl.type = ty_query_subrange(list->type, &low, &high);
      }
      else {
         data_rec->u.decl.type = list->type;
      }

      if (list->is_ref == TRUE) { //var parameter
         data_rec->u.decl.v.offset = b_get_formal_param_offset(TYPTR);
      }
      else {
         data_rec->u.decl.v.offset = b_get_formal_param_offset(data_rec->u.decl.type);
      }

      st_install(list->id, data_rec);
      list = list->next;
   }
}



EXPR make_id_expr(ST_ID id) {
}

EXPR make_un_expr(EXPR_UNOP op, EXPR sub) {
}

EXPR make_bin_expr(EXPR_BINOP op, EXPR left, EXPR right) {
}

EXPR make_error_expr() {
}

EXPR check_assign_or_proc_call(EXPR lhs, ST_ID id, EXPR rhs) {
}

void expr_free(EXPR expr) {
}
