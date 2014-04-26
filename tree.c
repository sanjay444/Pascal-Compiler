#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "tree.h"



BOOLEAN isTagNumerical(TYPETAG t)
{
  switch (t) 
  {
    case TYSIGNEDLONGINT:
    case TYFLOAT:
    case TYDOUBLE:
      return TRUE;
  }
  
  return FALSE;
}

EXPR make_convert_expr(EXPR sub_expr, TYPE type)
{
  EXPR expr;
  expr = make_un_expr(CONVERT_OP, sub_expr);
  expr->type = type;

  return expr;
}
void install_local_params(PARAM_LIST param)
{  
  ST_DR stdr;
  long low, high;

  while(param != NULL) {
    //create new record
    stdr = stdr_alloc();
    stdr->tag = PDECL;
    stdr->u.decl.type = param->type;
    stdr->u.decl.sc = param->sc;
    stdr->u.decl.is_ref = param->is_ref;
    stdr->u.decl.err = param->err;
    
    //set offset (based on is_ref or type)
    if (param->is_ref == TRUE) {
      stdr->u.decl.v.offset = get_formal_param_offset(TYPTR);
    } else {
      if (ty_query(param->type) != TYSUBRANGE) {
	stdr->u.decl.v.offset = get_formal_param_offset(ty_query(param->type));
      } else {
	stdr->u.decl.v.offset = get_formal_param_offset(ty_query(ty_query_subrange(param->type, &low, &high)));
      }
    }

    //install parameter
    st_install(param->id, stdr);

    //get next item
    param = param->next;
  }
}
EXPR check_assign(EXPR assign)
{
  EXPR left, right;
  TYPETAG left_tag, right_tag;
  left = assign->u.binop.left;
  right = assign->u.binop.right;
  
  left_tag = ty_query(left->type);
  right_tag = ty_query(right->type);
  if (right_tag == TYERROR || left_tag == TYERROR) {
    return make_error_expr();
  }
  if (left_tag == right_tag) {
    return assign;
  } 
  if (left_tag == TYDOUBLE) {

    if (right_tag != TYFLOAT && right_tag != TYSIGNEDLONGINT) {
      printf("right is not float/int and left is double\n");
      error("Illegal conversion");
      return make_error_expr();
    } 
    if (right_tag == TYFLOAT || right_tag == TYSIGNEDLONGINT) {
      
      if (assign->u.binop.right->tag == INTCONST) { 
	assign->u.binop.right = make_realconst_expr(assign->u.binop.right->u.intval);
      } else { 
	assign->u.binop.right = make_convert_expr(assign->u.binop.right, ty_build_basic(TYDOUBLE));
      }
    }
    
    return assign;
  } 
  if (left_tag == TYFLOAT) {
    
   
    if (right_tag != TYDOUBLE && right_tag != TYSIGNEDLONGINT) {
      printf("left is float, right is double/int\n");
      error("Illegal conversion");
      return make_error_expr();
    } 
    assign->u.binop.right = make_convert_expr(assign->u.binop.right, ty_build_basic(TYFLOAT));

    return assign;
  } 
  if (left_tag == TYUNSIGNEDCHAR && right->tag == STRCONST) {
 
    if (strlen(right->u.strval) != 1) {
      printf("left is unsginedchar and right is strconst\n");
      error("Illegal conversion");
      return make_error_expr();
    } 
    
    assign->u.binop.right = make_intconst_expr(right->u.strval[0], ty_build_basic(TYSIGNEDLONGINT));

    return assign;
  }

  if (left_tag == TYARRAY || right_tag == TYARRAY) {
     return assign;
  }
 
  printf("left_tag is %d\n",left_tag);
  printf("right_tag is %d\n",right_tag);
  error("Illegal conversion");
  return make_error_expr();
}


BOOLEAN isTagCharNum(TYPETAG t)
{
  switch (t) {
    case TYSIGNEDLONGINT:
    case TYFLOAT:
    case TYDOUBLE:
    case TYUNSIGNEDCHAR:
    case TYSIGNEDCHAR:
      return TRUE;
  }
  
  return FALSE;
}


EXPR castIntExpr(EXPR expr)
{ 

  if (expr->tag == INTCONST) {
    expr = make_realconst_expr(expr->u.intval);
  }
  
 
  if (expr->tag == UNOP && expr->u.unop.op == CONVERT_OP && expr->u.unop.operand->tag == INTCONST) 
   {
    expr = make_realconst_expr(expr->u.unop.operand->u.intval);
  }

  return expr;
}


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
  VAR_ID_LIST node;
  TYPETAG tag;
  
    ST_DR new_data_rec;
      BOOLEAN resolved;
  if (type == NULL) {
    error("Variable(s) must be of data type"); 
    return;
  }

  tag = ty_query(type);
  if (tag == TYFUNC || tag == TYERROR) {
      error("Variable(s) must be of data type");

      new_data_rec = stdr_alloc();
      new_data_rec->u.decl.type = type;
      new_data_rec->u.decl.sc = NO_SC;
      new_data_rec->tag = GDECL;

      if (tag == TYERROR) {
	new_data_rec->u.decl.err = TRUE;
      }

      resolved = st_install(list->id, new_data_rec);
      return;
   }
	while(list!=NULL)
	{

		resolve_all_ptr();

		new_data_rec = stdr_alloc();

		// Fill the fields of the new symbol table data record
		new_data_rec->tag=GDECL;
		new_data_rec->u.decl.type=type;
		new_data_rec->u.decl.sc=NO_SC;
		new_data_rec->u.decl.is_ref=FALSE;
		new_data_rec->u.decl.v.offset = 0;
		new_data_rec->u.decl.err =FALSE;


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

/************************************************************************
 * Prepend an EXPR onto the front of an EXPR_LIST                       *
 *                                                                      *
 * Return: altered EXPR_LIST list                                       *
 ************************************************************************/
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

/************************************************************************
 * Reverses a list of EXPRs                                             *
 *                                                                      *
 * Return: reversed EXPR_LIST                                           *
 ************************************************************************/
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

/************************************************************************
/* Processes variable declarations and installs ids into symbol table   *
 * as either GDECL or LDECL                                             *
 *                                                                      *
 * Return: altered value of cur_offset                                  *
 ************************************************************************/
int process_var_decl(VAR_ID_LIST ids, TYPE type, int cur_offset) {
   int block;
   ST_DR data_block;
   ST_DR data_rec;

   //check type, it must by data type
   TYPETAG tag = ty_query(type);
   if (tag == TYFUNC) {
      error("Variable(s) must be of data type");
   }
   
   if (st_get_cur_block() >= 1) { //global variables
      create_gdecl(ids, type);
      decl(type,ids);
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

/************************************************************************
 * Checks that both lo and hi are INTCONSTS of the same type, also      *
 * checks that the second index is larger than the first                * 
 * Previous check_subrange function took in long parameters             *
 *                                                                      *
 * Return: new subrange type                                            *
 ************************************************************************/
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

/************************************************************************
/* Builds the function declaration type and intalls into the symbol     *
 * table.                                                               *
 *                                                                      *
 * Return: Nothing                                                      *
 ************************************************************************/
void build_func_decl(ST_ID id, TYPE type, DIRECTIVE dir) {
   PARAM_LIST params;
   BOOLEAN check;
   TYPE returntype;

   // creates data record
   ST_DR data_rec;
   data_rec = stdr_alloc();
   data_rec->tag = GDECL;

   if (dir == DIR_EXTERNAL) {
      //retrieve return type
      //set check args to false and return new functype
      data_rec->u.decl.sc = EXTERN_SC;
      returntype = ty_query_func(type, &params, &check);
      data_rec->u.decl.type = ty_build_func(returntype, params, FALSE);
   }
   else if (dir == DIR_FORWARD) {
      //type is not altered
      data_rec->u.decl.sc = NO_SC;
      data_rec->u.decl.type = type; 
   }
   else {
      //othewise an invalid directive
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

/************************************************************************
 * Function to...                                                       *
 *                                                                      *
 * Return: int value for offset                                         *
 ************************************************************************/
int enter_function(ST_ID id, TYPE type, char *global_func_name)
{
  printf("entering function\n");
  int block;
  ST_DR stdr;
  PARAM_LIST param1, param2;
  BOOLEAN c_args1, c_args2;
  TYPE type1, type2;
  TYPETAG type_tag1;

  type1 = ty_query_func(type, &param1, &c_args1);
  type_tag1 = ty_query(type1);
  stdr = st_lookup(id, &block);

  if (stdr == NULL) {
    //create record
    stdr = stdr_alloc();
    stdr->tag = FDECL;
    stdr->u.decl.type = type;
    stdr->u.decl.sc = NO_SC;
    stdr->u.decl.is_ref = FALSE;
    stdr->u.decl.v.global_func_name = global_func_name;

    //install it
    st_install(id, stdr);
  }
 else
 { 
    
    if(stdr->tag != GDECL || stdr->u.decl.sc != NO_SC) {
      error("Duplicate function declaration");
      return;
    } 
    
    type2 = ty_query_func(stdr->u.decl.type, &param2, &c_args2);
    if (ty_test_equality(type1, type2) != TRUE) {
      error("Incorrect return type");
      return;
    } 
    
    stdr->tag = FDECL;
    stdr->u.decl.v.global_func_name = global_func_name;
  }

  fi_top++;
  func_id_stack[fi_top] = id;

  st_enter_block();

  bo_top++;
  b_init_formal_param_offset();
  if (st_get_cur_block() > 2) {
    b_store_formal_param(TYPTR);
  }

  install_local_params(param1);

  base_offset_stack[bo_top] = get_local_var_offset();

  if (type_tag1 != TYVOID) {
    base_offset_stack[bo_top] -= 8;
  }

  return base_offset_stack[bo_top];
}

/************************************************************************
 * Creates a new INCTCONST node with given type and value               *
 *                                                                      *
 * Return: the new node                                                 *
 ************************************************************************/
EXPR make_intconst_expr(long val, TYPE type) {
   EXPR ret;
   ret = (EXPR)malloc(sizeof(EXPR_NODE));
   assert(ret != NULL);
   ret->tag = INTCONST;
   ret->type = type;
   ret->u.intval = val;
   return ret;
}




/************************************************************************
 * Creates a new REALCONST node with TYDOUBLE type and given value      *
 *                                                                      *
 * Return: the new node                                                 *
 ************************************************************************/
EXPR make_realconst_expr(double val) {
   printf("creating realconst node\n");
   EXPR ret;
   ret = (EXPR)malloc(sizeof(EXPR_NODE));
   assert(ret != NULL);
   ret->tag = REALCONST;
   ret->type = ty_build_basic(TYDOUBLE);
   ret->u.realval = val;
   return ret;
}


EXPR tryFoldExpr(EXPR expr)
{
  EXPR_BINOP op;
  double real_val;
  long int_val;
  TYPETAG tag;
  op = expr->u.binop.op;
  tag = ty_query(expr->type);

  switch(op)
   {
    case ASSIGN_OP:    break;
    case ADD_OP: 
    case SUB_OP: 
    case MUL_OP: 
    case DIV_OP:
    case MOD_OP: 
    case REALDIV_OP: 
    	  if((expr->u.binop.left->tag == INTCONST || expr->u.binop.left->tag == REALCONST) && (expr->u.binop.right->tag == INTCONST || expr->u.binop.right->tag == REALCONST)) 
   	      {
		    if(tag == TYDOUBLE || tag == TYFLOAT) 
		      { 
			  if(expr->u.binop.left->tag == REALCONST) 
			      {
				    real_val = expr->u.binop.left->u.realval;
	 		      }
			 else 
			      {
	   			    real_val = expr->u.binop.left->u.intval;
	  		      }
	            if(expr->u.binop.right->tag == REALCONST) 
		      {
	 		   if(op==ADD_OP)
			      {
	                         real_val += expr->u.binop.right->u.realval;
	                       } 
			   else if(op==SUB_OP) 
                               {
				 real_val -= expr->u.binop.right->u.realval;
	   		      } 
			   else if(op==MUL_OP)
                              { 
	                         real_val *= expr->u.binop.right->u.realval;
	                      } 
                           else if(op==DIV_OP) 
                              { 
	                          real_val /= expr->u.binop.right->u.realval;
                       	    }
	              } 
                     else 
                      {
	                     if (op==ADD_OP)
                                 { 
	                             real_val += expr->u.binop.right->u.intval;
	                         }
                           else if(op==SUB_OP) 
				{ 
	                             real_val -= expr->u.binop.right->u.intval;
	                       } 
			   else if(op==MUL_OP) 
                               { 
			            real_val *= expr->u.binop.right->u.intval;
			       } 
                         else if(op==DIV_OP)
                             { 
		                   real_val /= expr->u.binop.right->u.intval;
	                      }
	                }
	 
	          expr = make_realconst_expr(real_val);
	      } 
           else 
   	    { 
		  int_val=expr->u.binop.left->u.intval;

		  if(op==ADD_OP)
		   { 
		  	  int_val += expr->u.binop.right->u.intval;

		  } 
                 else if(op==SUB_OP)
                   { 
		    int_val-=expr->u.binop.right->u.intval;
		  } 
                 else if(op==MUL_OP) 
                   { 
		        int_val *= expr->u.binop.right->u.intval;
		  } 
                 else if(op==DIV_OP)
                  { 
		    int_val/=expr->u.binop.right->u.intval;
		  } 
                 else if (op == MOD_OP)
                  { 
		    int_val%=expr->u.binop.left->u.intval;
		  }
                 else if(op==REALDIV_OP)
                   {
		    int_val/=expr->u.binop.left->u.intval;
		  }
	  
	  //creating the folded expression
	  expr=make_intconst_expr(int_val,ty_build_basic(TYSIGNEDLONGINT));
	}
      }
      break; 
    case EQ_OP: 
    case LESS_OP:
    case LE_OP: 
    case NE_OP:
    case GE_OP: 
    case GREATER_OP: 
      if (expr->u.binop.left->tag == INTCONST && expr->u.binop.right->tag == INTCONST) 
        {
	   if(op==EQ_OP)
             { 
		  int_val = expr->u.binop.left->u.intval == expr->u.binop.left->u.intval;
	     } 
           else if(op==LESS_OP) 
	     { 
	  	int_val = expr->u.binop.left->u.intval < expr->u.binop.left->u.intval;
	     } 
          else if(op==LE_OP) 
            {
	       int_val = expr->u.binop.left->u.intval <= expr->u.binop.left->u.intval;
	     } 
          else if(op==NE_OP) 
	    { 
	       int_val = expr->u.binop.left->u.intval != expr->u.binop.left->u.intval;
	    }
          else if(op==GE_OP) 
            {
	       int_val = expr->u.binop.left->u.intval >= expr->u.binop.left->u.intval;
	    } 
          else if(op==GREATER_OP) 
	    {
	        int_val = expr->u.binop.left->u.intval > expr->u.binop.left->u.intval;
	    }

	expr = make_intconst_expr(int_val, ty_build_basic(TYSIGNEDLONGINT));
	expr = make_convert_expr(expr, ty_build_basic(TYSIGNEDCHAR));
	
      } 
     else if(expr->u.binop.left->tag==STRCONST&&expr->u.binop.right->tag==STRCONST && strlen(expr->u.binop.left->u.strval) == 1 && strlen(expr->u.binop.right->u.strval) == 1) 
        {
	    if(op==EQ_OP) 
      	       { 
	         int_val = expr->u.binop.left->u.strval[0] == expr->u.binop.left->u.strval[0];
	      } 
            else if(op==LESS_OP) 
              { 
	         int_val = expr->u.binop.left->u.strval[0] < expr->u.binop.left->u.strval[0];
	     } 
           else if(op==LE_OP) 
             { 
	         int_val=expr->u.binop.left->u.strval[0] <= expr->u.binop.left->u.strval[0];
	      } 
           else if(op == NE_OP) 
             {
	          int_val = expr->u.binop.left->u.strval[0] != expr->u.binop.left->u.strval[0];
	     }
           else if (op == GE_OP) 
             { 
	           int_val = expr->u.binop.left->u.strval[0] >= expr->u.binop.left->u.strval[0];
	     } 
           else if (op == GREATER_OP) 
             { 
	          int_val = expr->u.binop.left->u.strval[0] > expr->u.binop.left->u.strval[0];
	     }
	expr = make_intconst_expr(int_val, ty_build_basic(TYSIGNEDLONGINT));
	expr = make_convert_expr(expr, ty_build_basic(TYSIGNEDCHAR));
      }
      break;
  }

  return expr;
}

/************************************************************************
 * Creates a new STRCONST node                                          *
 *                                                                      *
 * Return: the new node                                                 *
 ************************************************************************/
EXPR make_strconst_expr(char *str) {
   EXPR ret;
   ret = (EXPR)malloc(sizeof(EXPR_NODE));
   assert(ret != NULL);
   ret->tag = STRCONST;
   ret->type = ty_build_ptr(NULL, ty_build_basic(TYUNSIGNEDCHAR));
   ret->u.strval = str;
   return ret;
}  

/************************************************************************
 * Creates a new NULLOP node with given op and TYPE depends on op       *
 *                                                                      *
 * Return: the new node                                                 *
 ************************************************************************/
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

/************************************************************************
 * Creates a new ERROR node with type ty_build_basic(TYERROR).          *
 * Returns new node						        *
 ************************************************************************/
EXPR make_error_expr() {
   EXPR ret;
   ret = (EXPR)malloc(sizeof(EXPR_NODE));
   assert(ret != NULL);
   ret->tag = ERROR;
   ret->type = ty_build_basic(TYERROR);
   return ret;
}

/************************************************************************
 * Function checks to see if EXPR is l-value, can be done by looking    *
 * at tag and other information                                         *
 *                                                                      *
 * Return: Boolean value, TRUE if l-value                               *
 ************************************************************************/
BOOLEAN is_lval(EXPR expr) {
   //fist check tag of expr
   if (expr->tag == LVAR || expr->tag == ARRAY_ACCESS) { //all LVARs are l-val
      return TRUE;
   }
   else if (expr->tag == GID) {
      if (ty_query(expr->type) == TYFUNC || ty_query(expr->type) == TYERROR) { //l-val only if data type
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

/************************************************************************
 * Creates a new EXPR node of type FCALL                                *
 *                                                                      *
 * Return: the new node                                                 *
 ************************************************************************/
EXPR make_fcall_expr(EXPR func, EXPR_LIST args) {
   BOOLEAN check;
   PARAM_LIST param;
   TYPE ret_type;
   TYPETAG expr_type;
   EXPR_LIST aCopy = args; //copy of arg list for adding deref/convert

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
            EXPR derefNode = make_un_expr(DEREF_OP, aCopy->expr);
            aCopy->expr = derefNode; //expr now points to deref node
         }

         //perform conversions
         expr_type = ty_query(aCopy->expr->type);
         if (expr_type == TYSIGNEDCHAR || expr_type == TYUNSIGNEDCHAR) {
            EXPR convertedNode = make_un_expr(CONVERT_OP, aCopy->expr);
            convertedNode->type = ty_build_basic(TYSIGNEDLONGINT);
            aCopy->expr = convertedNode;//expr now points to convert node
         }
         else if (expr_type == TYFLOAT) {
            EXPR convertedNode = make_un_expr(CONVERT_OP, aCopy->expr);
            convertedNode->type = ty_build_basic(TYDOUBLE);
            aCopy->expr = convertedNode;//expr now points to convert node
         }
         
         aCopy = aCopy->next;
      }
   }
   else { //check_args is true
      while (aCopy != NULL && param != NULL) {
         if (param->is_ref == TRUE) { //VAR parameter
            //actual arg must be an l-value whose type 
            //matches the type of the formal param
            if(ty_test_equality(aCopy->expr->type, param->type) == FALSE) {
               error("types not equal");
               return make_error_expr();
            }
         }
         else {
            //make actual arg an r-value
            if (is_lval(aCopy->expr) == TRUE) {
               EXPR derefNode = make_un_expr(DEREF_OP, aCopy->expr);
               aCopy->expr = derefNode; //expr now points to convert node
            }
      
            //perfrom conversions
            expr_type = ty_query(aCopy->expr->type);
            if (expr_type == TYSIGNEDCHAR || expr_type == TYUNSIGNEDCHAR) {
               EXPR convertedNode = make_un_expr(CONVERT_OP, aCopy->expr);
               convertedNode->type = ty_build_basic(TYSIGNEDLONGINT);
               aCopy->expr = convertedNode;
            }
            else if (expr_type == TYFLOAT) {
               EXPR convertedNode = make_un_expr(CONVERT_OP, aCopy->expr);
               convertedNode->type = ty_build_basic(TYDOUBLE);
               aCopy->expr = convertedNode;
            }
         }

         //try to convert to type of formal parameter

        aCopy = aCopy->next;
        param = param->next;
      }
   }
   //check number formal args and param args and if differ then error

   //create an fcall node
   EXPR ret;
   ret = (EXPR)malloc(sizeof(EXPR_NODE));
   assert(ret != NULL);
   ret->tag = FCALL;
   ret->type = ret_type;
   ret->u.fcall_or_array_access.args_or_indices = args;
   ret->u.fcall_or_array_access.function_or_array = func;

   return ret;
}


/************************************************************************
 * Function to install parameters, used in enter_function()             *
 * local function                                                       *
 *                                                                      *
 * Return: nothing                                                      *
 ************************************************************************/
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

//added by Chris 04/08/14
/*EXPR make_id_expr(ST_ID id) {
	ST_DR typeSTDR;
	STDR_TAG tag;
	EXPR_TAG etag;
        int block;

	 //if the id is null then bug is found
	if (id == NULL)
		bug("null id passed to \"st_install\"");

	typeSTDR=st_lookup(id, &block);

	tag=typeSTDR->tag;

	if (tag==TYPENAME){
		error("This is a typename");
		return NULL;
	}
 	 	
	switch(tag)
	{
	case TYPENAME:
		error("This is a typename");
		return NULL;
	case GDECL:
		etag = GID;
		break;
	case LDECL:
	case PDECL:
		etag = LVAR;
		if(id == typeSTDR.u.lvar->is_ref)
			typeSTDR.u.lvar->link_count = block-id.block;
		else
			typeSTDR.u.lvar->link_count = block;

		break;
	case FDECL:
		if(block<1){
			etag = LVAR;
			if(id == u.lvar->is_ref)
						u.lvar->link_count = block-id.block;
					else
			u.lvar->link_count = block;
		}
		else{
			etag = LFUN;
			u.lfun->link_count = block;
			u.lfun->global_name = id;
		break;
	Default:
		break;
		}

	return etag->tag;

}//end make_id_expr*/

/************************************************************************
 * Creates a new (GID, LFUN, LVAR) type                                 *
 *                                                                      *
 * Return: the new node                                                 *
 ************************************************************************/
EXPR make_id_expr(ST_ID id) {
   ST_DR data_rec;
   int block;
   EXPR ret;
   ret = (EXPR)malloc(sizeof(EXPR_NODE));
   assert(ret != NULL);

   //look up information for id, error if not found or TYPENAME
   data_rec = st_lookup(id, &block);
   if (data_rec == NULL) {
      error("Undeclared identifier \"%s\" in expression", st_get_id_str(id));
      return make_error_expr();
   } 
   
   if (data_rec->tag == TYPENAME) {
      error("Identifier \"%s\" installed as TYPENAME", st_get_id_str(id));
      return make_error_expr();
   }

   //switch statement to fill rest of fields for ret
   ret->type = data_rec->u.decl.type;
   switch(data_rec->tag) {
      case GDECL:
         ret->tag = GID;
         ret->u.gid = id;
         break;
      case LDECL:
      case PDECL:
         ret->tag = LVAR;
         ret->u.lvar.is_ref = data_rec->u.decl.is_ref;
         ret->u.lvar.link_count = st_get_cur_block() - block;
         ret->u.lvar.offset = data_rec->u.decl.v.offset;
         break;
      case FDECL:
         if (block <= 1) {
            ret->tag = GID;
            ret->u.gid = id;
         }
         else {
            ret->tag = LFUN;
            ret->u.lfun.global_name = data_rec->u.decl.v.global_func_name;
            ret->u.lfun.link_count = st_get_cur_block() - block;
         }
         break;
       
      default:
         break;
   }
   return ret;
}
   
/* gram: standard_procedure_statement (9th production), signed_primary (2nd production), signed_factor (2nd production), factor (5th and 6th productions -- optional), variable_or_function_access_no_id (5th and 8th productions), standard_functions (1st, 2nd (optional), and 3rd production (if only one parameter))
   Returns a new UNOP node based on the op and the sub(expression):
   1. If op expects an r-value and sub is an l-value, then a DEREF node is
      added to sub to make it an r-value (the only Pascal unary ops that
      expect l-values instead of r-values are the New operator and the
      Address-of operator, which is optional).
   2. The subexpression is unary-converted (the only unary conversions that
      require us adding an explicit node are float->double and
      subrange->base type).  Only r-values are converted.
   3. The rest of the behavior depends on the op (switch statement), including
      error-checking and constant-folding.
   NOTE: String constants of length 1 can be converted to char if necessary.
   This happens, e.g., with the Ord function ("Ord('A')").
   typedef enum {
       CONVERT_OP, DEREF_OP, NEG_OP, ORD_OP, CHR_OP, UN_SUCC_OP, UN_PRED_OP,
       NOT_OP, ABS_OP, SQR_OP, SIN_OP, COS_OP, EXP_OP, LN_OP, SQRT_OP, ARCTAN_OP,
       ARG_OP, TRUNC_OP, ROUND_OP, CARD_OP, ODD_OP, EMPTY_OP, POSITION_OP,
       LASTPOSITION_OP, LENGTH_OP, TRIM_OP, BINDING_OP, DATE_OP, TIME_OP,
       UN_EOF_OP, UN_EOLN_OP, INDIR_OP, UPLUS_OP, NEW_OP, DISPOSE_OP, ADDRESS_OP,
       SET_RETURN_OP
} EXPR_UNOP;

EXPR make_un_expr(EXPR_UNOP op, EXPR sub){


	BOOLEAN lval;
	BOOLEAN deref;
	EXPR ret;
	ret = (EXPR)malloc(sizeof(EXPR_NODE));
	
	
	lval = is_lval(sub);
	if(lval){
		if(op<>ADDRESS_OP || op<>NEW_OP)
				deref = TRUE;
		else
			ret->u.unop.op = op;
			ret->u.unop.operand = sub;
			return ret;
		}//end if
	if (deref){
		ret->u.unop.op = op;
		ret->u.unop.operand = sub;
		return ret;
	}
	switch (op){

		case CONVERT_OP:
		case NEG_OP:
		case ORD_OP:
		case CHR_OP:
		case UN_SUCC_OP:
		case UN_PRED_OP:
		case NOT_OP:
		case ABS_OP:
		case SQR_OP:
		case SIN_OP:
		case COS_OP:
		case EXP_OP:
		case LN_OP:
		case SQRT_OP:
		case ARCTAN_OP:
		case ARG_OP:
		case TRUNC_OP:
		case ROUND_OP:
		case CARD_OP:
		case ODD_OP:
		case EMPTY_OP:
		case POSITION_OP:
		case LASTPOSITION_OP:
		case LENGTH_OP:
		case TRIM_OP:
		case BINDING_OP:
		case DATE_OP:
		case TIME_OP:
		case UN_EOF_OP:
		case UN_EOLN_OP:
		case INDIR_OP:
		case UPLUS_OP:
		case DISPOSE_OP:
        case SET_RETURN_OP:

		
	return ret;
}//end make_un_expr*/

/************************************************************************
 * Creates a new UNOP node, with op and sub                             *
 * Also creates DEREF nodes and conversions if necessary                *
 *                                                                      *
 * Return: the new node                                                 *
 ************************************************************************/
EXPR make_un_expr(EXPR_UNOP op, EXPR sub) {
   /*new node variables & initial assignments*/
   EXPR ret;
   ret = (EXPR)malloc(sizeof(EXPR_NODE));
   assert(ret != NULL);
   ret->tag = UNOP;
   ret->type = sub->type;
   ret->u.unop.op = op;
   ret->u.unop.operand = sub;
   /*querying variables*/
   TYPETAG sub_tag = ty_query(sub->type);
   ST_ID id;
   TYPE base_type,next;
   long low, high; 

   //there was an infinite loop when creating a DEREF node
   if (op == DEREF_OP) {
      return ret;
   }

   //if op expects an r-value and sub is an l-value, add a DEREF node
   if (op == ADDRESS_OP || op == NEW_OP) { //expect l-values
      if (is_lval(sub) == FALSE) {
         return make_error_expr();
      }
   }
   else { //expect r-values
      if (is_lval(sub) == TRUE) {
         ret->u.unop.operand = make_un_expr(DEREF_OP,sub);
      }
   }

   sub_tag = ty_query(sub->type);
   //subexpression is unary-converted
   if (is_lval(sub) == FALSE) {
      if (sub_tag == TYFLOAT) {
         EXPR convertedNode = make_un_expr(CONVERT_OP, sub);
         convertedNode->type = ty_build_basic(TYDOUBLE);
         ret->u.unop.operand = convertedNode;
      }
      else if (sub_tag == TYSUBRANGE) {
         EXPR convertedNode = make_un_expr(CONVERT_OP, sub);
         base_type = ty_query_subrange(sub->type, &low, &high);
         convertedNode->type = base_type;
         ret->u.unop.operand = convertedNode;
      }
   }

   sub_tag = ty_query(sub->type);
   //switch statement on op for error checking
   switch (op) {
      case CONVERT_OP:
         break;
      case DEREF_OP:
         break;
      case NEG_OP:
         //must be of type TYSIGNEDLONGINT, TYDOUBLE
         if (sub_tag != TYSIGNEDLONGINT &&  sub_tag != TYDOUBLE) {
            error("Incorrect type in NEG_OP");
            return make_error_expr();
         }
         break;
      case ORD_OP:
         //must be CHAR
         if (sub_tag != TYUNSIGNEDCHAR && sub_tag != TYSIGNEDCHAR) {
           /* error("Incorrect type in ORD_OP");
            return make_error_expr();*/
         }

         //since it returns int...I think the type needs to be changed
         ret->type = ty_build_basic(TYSIGNEDLONGINT);
         break;
      case CHR_OP:
         //converts byte value to char value...check type
         if (sub_tag != TYSIGNEDLONGINT && sub_tag != TYDOUBLE ) {
            error("Incorrect type in CHR_OP");
            return make_error_expr();
         }
   
         //returns char so updated type
         ret->type = ty_build_basic(TYUNSIGNEDCHAR);
         break;
      case UN_SUCC_OP:
         //check type, must be ordinal type
         if (sub_tag != TYSIGNEDLONGINT && sub_tag != TYDOUBLE && sub_tag != TYUNSIGNEDCHAR) {
            error("Incorrect type in UN_SUCC_OP");
            return make_error_expr();
         }
         break;
      case UN_PRED_OP:
         if (sub_tag != TYSIGNEDLONGINT && sub_tag != TYDOUBLE && sub_tag != TYUNSIGNEDCHAR) {
            error("Incorrect type in UN_PRED_OP");
            return make_error_expr();
         }
         break;
      case UPLUS_OP:
         //check type
         if (sub_tag != TYSIGNEDLONGINT && sub_tag != TYDOUBLE) {
            error("Incorrect type in UPLUS_OP");
            return make_error_expr();
         }
         break; 
      case INDIR_OP:
         //returns a pointer, not sure if any other errors/checks
         ret->type = ty_query_ptr(sub->type, &id, &next);
      default:
         break;
   }
   return ret;
}


/* gram: expression (1st production), simple_expression (2nd production; 3rd, 4th, and 5th productions are optional), term (2nd production; 3rd is optional), standard_functions (3rd production -- if 2 arguments (optional))
   Returns a new BINOP node based on the op and the two subexpressions:
   1. If op expects r-value(s), then DEREF nodes are added as needed (the only
      binary op that expects an l-value is assignment, which expects an
      l-value on the left and an r-value on the right).
   2. Both left and right are unary-converted as above.
   3. Both left and right are binary converted (the only binary conversion
      requiring a convert node is long int->double).
   4. Currently, no binary operations are allowed on string constants except
      = and <> (EQ and NE), so if both subexpressions are string constants,
      they are converted to chars if possible (only if they are length 1).
      If one argument is a string constant and the other is of type char,
      then also try to convert the string constant.
   5. The rest of the behavior depends on the op (switch statement) and the
      typetags of the subexpressions, including error-checking and
      constant-folding (for example, arithmetic ops can't act on nonnumeric
      types).
*/

/************************************************************************
 * Creates a new BINOP node with op and expr left, right                *
 * Also creates DEREF nodes and conversions if necessary                *
 *                                                                      *
 * Return: the new node                                                 *
 ************************************************************************/


EXPR make_bin_expr(EXPR_BINOP op, EXPR left, EXPR right)  
{
  EXPR ret;
  TYPE next;
  long low, high;
  
  if(left->tag == ERROR || right->tag == ERROR) {
    return make_error_expr();
  } 
  
  ret = malloc(sizeof(EXPR_NODE));
  ret->tag = BINOP;
  ret->type = right->type;
  ret->u.binop.op = op;
  ret->u.binop.left = left;
  ret->u.binop.right = right;
  ret = tryFoldExpr(ret);
  if(ret->tag!=BINOP)
  {
    return ret;
  }

  TYPETAG left_type = ty_query(left->type);
  TYPETAG right_type = ty_query(right->type);

  if(op==ASSIGN_OP) 
   {
    
    if(is_lval(left) != TRUE)
     {
      error("Assignment requires l-value on the left");
      return make_error_expr();	
    } 
    if(is_lval(right)) 
     {
      right = ret->u.binop.right = make_un_expr(DEREF_OP, right); 
    }
    if(right_type == TYVOID)  
     {
      error("Cannot convert between nondata types");
      return make_error_expr();
    } 
    if(right_type == TYFLOAT) 
     {
      ret->u.binop.right = make_convert_expr(right, ty_build_basic(TYDOUBLE));
    }
   else if(right_type == TYSUBRANGE) 
    { 
      next = ty_query_subrange(right->type, &low, &high);
      ret->u.binop.right = make_convert_expr(right, next);
    }
    return check_assign(ret);
  }

  if (is_lval(left)) 
  { 
    ret->u.binop.left = make_un_expr(DEREF_OP, left);
  }
  if (is_lval(right))
  { 
    ret->u.binop.right = make_un_expr(DEREF_OP, right);
  }

  if(left_type==TYFLOAT || left_type==TYSUBRANGE) 
   {
    
    if (left_type == TYFLOAT)
    { 
      ret->u.binop.left = make_convert_expr(left, ty_build_basic(TYDOUBLE));
    } 
   else 
     {
      next = ty_query_subrange(left->type, &low, &high);
      ret->u.binop.left = make_convert_expr(left, next);
    }
    left_type = ty_query(ret->u.binop.left->type);
  }

  if (left_type == TYFLOAT || right_type == TYSUBRANGE) {
    
    if (right_type == TYFLOAT)
    {
      ret->u.binop.right = make_convert_expr(right, ty_build_basic(TYDOUBLE));
    } 
  else
   { 
      next = ty_query_subrange(right->type, &low, &high);
      ret->u.binop.right = make_convert_expr(right, next);
    }

    right_type = ty_query(ret->u.binop.right->type);
  }

  if (left_type == TYDOUBLE || right_type == TYDOUBLE)
   { 
    if (left_type == TYSIGNEDLONGINT) {
      ret->u.binop.left = make_convert_expr(ret->u.binop.left, ty_build_basic(TYDOUBLE));

     left_type = ty_query(ret->u.binop.left->type);
    }
    if (right_type == TYSIGNEDLONGINT) {
      ret->u.binop.right = make_convert_expr(ret->u.binop.right, ty_build_basic(TYDOUBLE));

      right_type = ty_query(ret->u.binop.right->type);
    }
  }
  
  switch (op) 
    {
    case ASSIGN_OP:
      break;
    case ADD_OP:
    case SUB_OP:
    case MUL_OP:
    case DIV_OP:
      if (isTagNumerical(right_type) == FALSE || isTagNumerical(left_type) == FALSE) {
      	error("Nonnumerical type argument(s) to arithmetic operation");
	return make_error_expr();
      } 
      
      if (left_type == TYDOUBLE || right_type == TYDOUBLE) {

	if (left_type == TYSIGNEDLONGINT) {
	  ret->u.binop.left = castIntExpr(ret->u.binop.left);
	}

	if (right_type == TYSIGNEDLONGINT) {
	  ret->u.binop.right = castIntExpr(ret->u.binop.right);
	}
	
	ret->type = ty_build_basic(TYDOUBLE);
      } else { 
	ret->type = ty_build_basic(TYSIGNEDLONGINT);
      }
      break;

    case MOD_OP:
    case REALDIV_OP: 

      if (right_type != TYSIGNEDLONGINT || left_type != TYSIGNEDLONGINT) {
	error("Noninteger type argument(s) to integer arithmetic operation");
	return make_error_expr();
      } 
      
      ret->type = ty_build_basic(TYSIGNEDLONGINT);
      break;

    case EQ_OP:
    case LESS_OP:
    case LE_OP:
    case NE_OP:
    case GE_OP:
    case GREATER_OP:
      if(right_type != left_type) {
	error("Incompatible type arguments to comparison operator");
	return make_error_expr();
      }
      if ((right_type) == FALSE && isTagCharNum(left_type) == FALSE) {
      	error("Illegal type arguments to comparison operator");
	return make_error_expr();
      }
      if(left_type == TYUNSIGNEDCHAR || right_type == TYSIGNEDCHAR) {
	ret->u.binop.left = make_convert_expr(ret->u.binop.left, ty_build_basic(TYSIGNEDLONGINT));
      }
      if(right_type == TYUNSIGNEDCHAR || right_type == TYSIGNEDCHAR) {
	ret->u.binop.right = make_convert_expr(ret->u.binop.right, ty_build_basic(TYSIGNEDLONGINT));
      }
      ret->type = ty_build_basic(TYSIGNEDLONGINT);
      ret = make_convert_expr(ret, ty_build_basic(TYSIGNEDCHAR));
      break;
  }

  return ret;
}




/* gram: assignment_or_call_statement
   If lhs is a simple identifier, then id is the corresponding ST_ID.
   Case 1 -- rhs is non-NULL: Then this is probably an assignment statement --
      returns a new BINOP with tag ASSIGN_OP and lhs and rhs as operands.
      EXCEPTION: if id is the id of the current function (the one whose body
      we are in), then this is a return value assignment; checks that the
      function has non-void return type, then returns a new UNOP with type
      the return type of the function, and op SET_RETURN_OP.
   Case 2 -- rhs is NULL: Then this is not an assignment and id is ignored.
      If lhs is either New or Dispose, then this is the entire expression
      and so just return lhs.  Otherwise the behavior depends on the lhs tag:
      a) If GID or LFUN, then check that lhs is a Pascal procedure
         (else error), whence this is a procedure call without arguments;
         return a new FCALL node.
      b) If FCALL, then this should be a procedure call (with arguments).
         Check that the type (the return type of the function) tag is void;
	 else error (a Pascal function call cannot stand alone as a
	 statement).  If ok, then return the FCALL node.
      c) Any other tag is an error.
*/


EXPR check_assign_or_proc_call(EXPR lhs, ST_ID id, EXPR rhs) {

   
   PARAM_LIST params;
   BOOLEAN check;

   //case1, if rhs non null, then return binop node with assign_op
   if (rhs != NULL) {
      //exception if id is id of current function
      if (id == func_id_stack[fi_top] && fi_top >= 0) {
         if (ty_query(ty_query_func(lhs->type, &params, &check)) != TYVOID) {
            //return type is nonvoid
            EXPR ret = make_un_expr(SET_RETURN_OP, rhs);
            ret->type = ty_query_func(lhs->type, &params, &check);
            return ret;
         }
         else {
            error("Function type is TYVOID\n");
            return make_error_expr();
         }
      }
      else {
         //returns binop with ASSIGN_OP
         EXPR ret = make_bin_expr(ASSIGN_OP, lhs, rhs);
         return ret;
      }
   }
   
   //case2, rhs is NULL
   else {
      if (lhs->tag == UNOP) {
         if (lhs->u.unop.op == NEW_OP || lhs->u.unop.op == DISPOSE_OP) {
            return lhs;
         }
      }

   
      if (lhs->tag == GID || lhs->tag == LFUN) {
         //check that lhs is a pascal procedure
         if (ty_query(lhs->type) == TYFUNC) {
            EXPR ret = make_fcall_expr(lhs, NULL);
            return ret;
         }
         else {
            error("Expected procedure name, saw data");
            return make_error_expr();      
         }
      }
      else if (lhs->tag == FCALL) {
            
         //check the return type is void
         if (ty_query(lhs->type) == TYVOID) {
            return lhs;
         }
         else {
            error("Procedure call to a nonvoid type");
            return make_error_expr();
         }
      }
      else if(lhs->tag ==  ERROR )
        {
		//error("reached");
               return make_error_expr();
        }
      else
      { 
         error("Procedure call expected");
         return make_error_expr();
      }
   }
}  
   	
/* Deallocates an expression tree.  Subexpressions and other subobjects
   are deallocated recursively, postorder. 
void expr_free(EXPR expr){

		if (expr != NULL){
			expr_free(expr);
			free(expr);
		}
	
}//end expr_free*/

/*void expr_list_free(EXPR_LIST list){
	
	if (list != NULL){
		expr_list_free(list);
		free(list);
	}
	
}//end expr_list_free */

/************************************************************************
 * Deallocates an expression tree                                       *
 * Subexpressions/subobjects are deallocated recursively, postorder     *
 ************************************************************************/
void expr_free(EXPR expr) {
   if (expr->tag == UNOP) {
      if (expr->u.unop.operand != NULL) {
         expr_free(expr->u.unop.operand);
      }
      free(expr);
   }
   else if (expr->tag == BINOP) {
      if (expr->u.binop.left != NULL) {
         expr_free(expr->u.binop.left);
      }
      if (expr->u.binop.right != NULL) {
         expr_free(expr->u.binop.right);
      }
      free(expr);
   }
   else if (expr->tag == FCALL) {
      if (expr->u.fcall_or_array_access.function_or_array != NULL) {
         expr_free(expr->u.fcall_or_array_access.function_or_array);
      }
      if (expr->u.fcall_or_array_access.args_or_indices != NULL) {
         expr_list_free(expr->u.fcall_or_array_access.args_or_indices);
      }
      free(expr);
   }
   else {
      free(expr);
   }
}    

/************************************************************************
 * Deallocates a list of expressions                                    *
 ************************************************************************/
void expr_list_free (EXPR_LIST list) {
   if (list->next != NULL) {
      expr_free(list->expr);
      expr_list_free(list->next);
   }
   expr_free(list->expr);
   free(list);
}

unsigned long get_value_range(TYPE type, long *low) {
}

/************************************************************************
 * Creates a new ARRAY_ACCESS expr with the given array and indices     *     
 * Function will also:                                                  *
 *     check that the array is of array type (else returns an error)    *
 *     gets the r-val of each index expression and unary converts       *
 *     checks that the type of each index expr matches the "formal"     *
 *        index type                                                    *
 *     checks that the number of index exprs matches that of the array  *
 *                                                                      *
 * Returns: the new node                                                *
 ************************************************************************/
EXPR make_array_access_expr(EXPR array, EXPR_LIST indices) {
   //checks to make sure array type
   if (ty_query(array->type) != TYARRAY) {
      error("Nonarray in array access expression");
      return make_error_expr();
   }

   //variables for querying
   TYPE array_type;
   INDEX_LIST i;

   array_type = ty_query_array(array->type, &i);

   while (indices != NULL && i != NULL) {
      //gets the r value, deref if l-val
      if (is_lval(indices->expr) == TRUE) {
         indices->expr = make_un_expr(DEREF_OP, indices->expr);
      }
      //unary converts
      if (ty_query(indices->expr->type) == TYSIGNEDCHAR || ty_query(indices->expr->type) == TYUNSIGNEDCHAR) {
         EXPR convertedNode = make_un_expr(CONVERT_OP, indices->expr);
         convertedNode->type = ty_build_basic(TYSIGNEDLONGINT);
         indices->expr = convertedNode;
         array_type = indices->expr->type;
      }
      else if (ty_query(indices->expr->type) == TYFLOAT) {
         EXPR convertedNode = make_un_expr(CONVERT_OP, indices->expr);
         convertedNode->type = ty_build_basic(TYDOUBLE);
         indices->expr = convertedNode;
         array_type = indices->expr->type;
      }
      
      //checks type with "formal" type
      if (ty_query(indices->expr->type) != TYSIGNEDLONGINT) {
         error("Incompatible index type in array access");
         return make_error_expr();
      }

      i = i->next;
      indices = indices->next;
   }
  
   //checks that both indices are same lenght
   if ((indices == NULL && i != NULL) || (indices != NULL && i == NULL)) {
      error("indices not equal");
      return make_error_expr();
   }

   //finally creates array_access node
   EXPR ret;
   ret = (EXPR)malloc(sizeof(EXPR_NODE));
   assert(ret != NULL);
   ret->tag = ARRAY_ACCESS;
   ret->type = array_type;
   ret->u.fcall_or_array_access.args_or_indices = indices;
   ret->u.fcall_or_array_access.function_or_array = array;
   
}

/************************************************************************
 * Returns a new VAL_LIST node with given information for a single case *
 * constant                                                             *
 ************************************************************************/
VAL_LIST new_case_value(TYPETAG type, long lo, long hi) {
   VAL_LIST ret;
   ret = (VAL_LIST)malloc(sizeof(VAL_LIST_REC));
   ret->lo = lo;
   ret->hi = hi;
   ret->type = type;
   return ret;
}

/************************************************************************
 * Function appends the case constant onto the list of previous vals    *
 *                                                                      *
 * For each case constant on the vals list:                             *
 *    checks that its type matches that of the case expr                *
 *    checks that the low value is <= high value (warning if not        *
 *    checks for any overlap between cur val and previous (error if so) *
 *                                                                      *
 * Returns true iff no errors                                           *
 ************************************************************************/
BOOLEAN check_case_values(TYPETAG type, VAL_LIST vals, VAL_LIST prev_vals) {
   while (vals != NULL) {
      //check type
      if (vals->type != type) {
         error("Case constant type does not match type of case expression");
         return FALSE;
      }
      //check subrange values
      if (vals->type == TYSUBRANGE) {
         if (vals->lo > vals->hi) {
            warning("Low value of subrange is greater than high value");
            //return FALSE //only true if no errors, this is warning
         }
      }
      //check for overlap
   }
   return TRUE;   
}

/************************************************************************
 * De-allocates a list of case constants                                *
 ************************************************************************/
void case_value_list_free(VAL_LIST vals) {
   if (vals->next != NULL) {
      case_value_list_free(vals->next);
   }
   free(vals);
}

/************************************************************************
 * Sets the output parameters to the value and type of the expression   *
 * expr (after converting a STRCONST if possible/necessary) must be     *
 * INTCONST or else error                                               *
 *                                                                      *
 * Returns true iff no errors                                           *
 ************************************************************************/
BOOLEAN get_case_value(EXPR expr, long *val, TYPETAG *type) {
   //check type
   if (expr->tag == INTCONST) {
      *type = ty_query(expr->type);
      *val = expr->u.intval;
      return TRUE;
   }
   else if (expr->tag == STRCONST) {
      //try and convert
      if (strlen(expr->u.strval) == 1) { //convert
         *type = TYSIGNEDCHAR;
         *val = expr->u.strval[0];
         expr = make_intconst_expr(expr->u.strval[0], ty_build_basic(TYSIGNEDLONGINT));
         return TRUE;
      }
      else { //error
         error("STRCONST not length 1");
         return FALSE;
      }
   }
   else { //error
      error("Case constant not of INTCONST type");
   }
}

/************************************************************************
 * Expressions passed in are for the loop control variable, initial     *
 * value, and the limit value.                                          *
 * Checks that the var is an l-value of ordinal type and that type      *
 * matches those of the init and limit (substitute base types for       *
 * subranges.                                                           *
 *                                                                      *
 * Returns tree iff all checks are ok                                   *
 ************************************************************************/
BOOLEAN check_for_preamble(EXPR var, EXPR init, EXPR limit) {
   TYPETAG var_type = ty_query(var->type);
   //check lvalue
   if (is_lval(var) == FALSE) {
      error("Loop control variable not an l-value");
      return FALSE;
   }
   //check if ordinal type
   if (var_type != TYSIGNEDCHAR && var_type != TYUNSIGNEDCHAR && var_type != TYSIGNEDLONGINT) {
      error("Loop control variable is not an ordinal type");
      return FALSE;
   }
   //see if type matches, ignoring subranges for now
   if (!ty_test_equality(var->type, init->type)) {
      error("Types in loop do not match");
      return FALSE;
   }
   else if (!ty_test_equality(var->type, limit->type)) {
      error("Types in loop do not match");
      return FALSE;
   }

   return TRUE;
}

BOOLEAN isBoolean(EXPR expr) {
   if (ty_query(expr->type) == TYSIGNEDCHAR) {
      return TRUE;
   }
   else {
      error("Non-Boolean expression");
      return FALSE;
   }
}
