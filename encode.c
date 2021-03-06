#include <stdlib.h>
#include <stdio.h>
#include "encode.h"
#include "backend-x86.h"

int exit_label = -1;
char* exit_label_stack[100];


void encode_unop(EXPR_UNOP op, EXPR expr);
void encode_binop(EXPR_BINOP out, EXPR expr);
void encode_fcall(EXPR func, EXPR_LIST args);

void new_exit_label() {
   char* label = new_symbol();
   exit_label++; //counter
   exit_label_stack[exit_label] = label;
}

char* old_exit_label() {
   if(exit_label < 0) {
      bug("Exit label stack is empty");
      return;
   }
   char* label = exit_label_stack[exit_label];
   exit_label--;
   return label;
}

char* current_exit_label() {
   if (exit_label < 0) {
      bug("Exit label stack is empty");
      return;
   }
   char* label = exit_label_stack[exit_label];
   return label;
}

BOOLEAN is_exit_label() {
   if (exit_label >= 0) {
      return TRUE;
   }
   else {
      return FALSE;
   }
}   
   

void simple_allocate_space (char *id, TYPE type)
{
	int size = simple_size (type);
	int alignment = size;
	if (size != 0){
		b_global_decl (id, alignment, size);
		b_skip(size);
	}
	else
	{
		error("This is an invalid type name");
	}
}

int getSize(TYPE type) {
   int size = simple_size(type);
   return size;
}

int get_formal_param_offset(TYPETAG tag)
{
  return b_get_formal_param_offset(tag);
}

void array_allocate_space (char *id, TYPE array, INDEX_LIST *i)
{
	TYPE simple_type = ty_query_array (array, i);

	int size = simple_size (simple_type);
	int asize = size * sizeof(i);

	b_global_decl (id, size, asize);
	b_skip(size);

}

void subrange_allocate_space (char *id, TYPE type, long *low, long *high)
{
	TYPE sub_type = ty_query_subrange(type, low, high);

	int size = simple_size (sub_type);

	b_global_decl (id, size, size);
	b_skip(size);
}

void decl(TYPE type, VAR_ID_LIST list_id)
{

	if (ty_query(type)==TYERROR) return;
	if (ty_query(type)==TYFUNC) return;

	while (list_id) {
		ST_ID id = list_id->id;

		int align;
		unsigned int size;
		char *id_decl;
		TYPETAG tag;

		if (!id)bug("Received NULL ST_ID\n");

		tag = ty_query(type);
		if(tag == TYARRAY) {
			align=simple_size(type);
			size=get_array_size(type, align);
		}
		else {
			size=align=simple_size(type);
		}

		id_decl=st_get_id_str(id);

		b_global_decl(id_decl, align, size);

		switch (tag)
		{
			case TYARRAY:
				b_skip(size);
				break;
			case TYSET:
				bug("illegal typetag (%d) in \"get_size\"", tag);
				break;
			case TYPTR:
				b_skip(size);
				break;
			case TYSTRUCT:
				bug("illegal typetag (%d) in \"get_size\"", tag);
				break;
			case TYUNION:
				bug("illegal typetag (%d) in \"get_size\"", tag);
				break;
			case TYENUM:
				bug("illegal typetag (%d) in \"get_size\"", tag);
				break;
			case TYFUNC:	
				break;
			case TYSUBRANGE:
				b_skip(size);
				break;
			case TYFLOAT:
				b_skip(size);
				break;
			case TYDOUBLE:
				b_skip(size);
				break;
			case TYLONGDOUBLE:
				b_skip(size);
				break;
			case TYUNSIGNEDINT:
				b_skip(size);
				break;
			case TYUNSIGNEDCHAR:
				b_skip(size);
				break;
			case TYUNSIGNEDSHORTINT:
				b_skip(size);
				break;
			case TYUNSIGNEDLONGINT:
				b_skip(size);
				break;
			case TYSIGNEDCHAR:
				b_skip(size);
				break;
			case TYSIGNEDINT:
				b_skip(size);
				break;
			case TYSIGNEDLONGINT:
				b_skip(size);
				break;
			case TYSIGNEDSHORTINT:
				b_skip(size);
				break;
			case TYVOID:
				msgn("void");
				break;
			case TYERROR:
				msgn("error");
				break;
			default:
				bug("illegal typetag (%d) in \"ty_print_type\"", tag);
		}

		list_id = list_id->next;
	}
}


int get_array_size(TYPE a_type, int align) {
	long low, high;
	TYPE object;
	TYPE type;
	unsigned int a_size = align;
	INDEX_LIST indices;
	

	type = a_type;
	while (ty_query(type) == TYARRAY) {
		type = ty_query_array(type, &indices);
		while (indices != NULL) { 
			object = ty_query_subrange(indices->type,&low,&high);
			a_size *= high - low + 1;

		
			indices = indices->next;
		}
	}


	return a_size;
}

int simple_size(TYPE type)
{
	TYPETAG tag;
	unsigned int length;
	INDEX_LIST i;

	tag = ty_query(type);
	switch (tag)
	{
		case TYARRAY:
			length = simple_size(ty_query_array(type, &i));
			break;
		case TYSET:
			bug("illegal typetag (%d) in \"get_size\"", tag);
			break;
		case TYPTR:
			length = 4;
			break;
		case TYSTRUCT:
			bug("illegal typetag (%d) in \"get_size\"", tag);
			break;
		case TYUNION:
			bug("illegal typetag (%d) in \"get_size\"", tag);
			break;
		case TYENUM:
			bug("illegal typetag (%d) in \"get_size\"", tag);
			break;
		case TYFUNC:
			break;
		case TYSUBRANGE:
			length = simple_size(ty_strip_modifier(type));
			break;
		case TYFLOAT:
			length = 4;
			break;
		case TYDOUBLE:
			length = 8;	
			break;
		case TYLONGDOUBLE:
			length = 8;
			break;
		case TYUNSIGNEDINT:
			length = 4;
			break;
		case TYUNSIGNEDCHAR:
			length = 1;
			break;
		case TYUNSIGNEDSHORTINT:
			length = 2;
			break;
		case TYUNSIGNEDLONGINT:
			length = 4;
			break;
		case TYSIGNEDCHAR:
			length = 1;
			break;
		case TYSIGNEDINT:
			length = 4;
			break;
		case TYSIGNEDLONGINT:
			length = 4;
			break;
		case TYSIGNEDSHORTINT:
			length = 2;
			break;
		case TYVOID:
			break;
		case TYERROR:
			break;
		default:
			bug("illegal typetag (%d) in \"ty_print_type\"", tag);
	}

	return length;
}

/*************************************************************************
 * Calls b_func_prologue("main") to prepare the entry point of the       *
 * main program body                                                     *
 *************************************************************************/
void enter_main_body() {
   b_func_prologue("main");
}

/*************************************************************************
 * Calls b_func_epilogue("main") to exit main program body               *
 *************************************************************************/
void exit_main_body() {
   b_func_epilogue("main");
}

/************************************************************************
 * Wrapper function for b_get_local_var_offset()                        *
 ************************************************************************/
int get_local_var_offset() {
   return b_get_local_var_offset();
}

/************************************************************************
 * Prepares for the body of a function, emits code to store formal      *
 * parameters and allocates space for the return value and local vars   *
 ************************************************************************/
void enter_func_body(char *global_func_name, TYPE type, int loc_var_offset) {
   TYPE func_type;
   TYPE param_type;
   PARAM_LIST params;
   BOOLEAN check;
   TYPETAG func_tag;
   TYPETAG param_tag;

   int block;
   ST_DR data_rec;
   long low,high;

   //query the function to get variables
   func_type = ty_query_func(type, &params, &check);
   func_tag = ty_query(func_type);

   //is local function? ignore for now

   while (params != NULL) {
      param_tag = ty_query(params->type);
      data_rec = st_lookup(params->id, &block);

      if (param_tag == TYSUBRANGE) { //subrange types use base type
         param_type = ty_query_subrange(type, &low, &high);
         b_store_formal_param(ty_query(param_type));
      }
      else if (data_rec->u.decl.is_ref == TRUE) { //VAR params
         b_store_formal_param(TYPTR);
      } else {
         b_store_formal_param(param_tag);
      }

      params = params->next;
   }

   //pascal function (non-void types)
   if (func_tag != TYVOID) {
      b_alloc_return_value();
   }

   //local vars
   b_alloc_local_vars(loc_var_offset - get_local_var_offset());
}

/************************************************************************
 * Emits code to end a function body & exits scope of function           *
 ************************************************************************/
void exit_func_body(char *global_func_name, TYPE type) {
   TYPE func_type;
   PARAM_LIST params;
   BOOLEAN check;
   TYPETAG func_tag;
   long low,high;

   //query function
   func_type = ty_query_func(type, &params, &check);
   func_tag = ty_query(func_type);
   
   //pops the function id from the global stack;
   fi_top--;

   //pascal function (nonvoid types)
   if (func_tag != TYVOID) {
      if (func_tag == TYSUBRANGE) {
         b_prepare_return(ty_query(ty_query_subrange(func_type, &low, &high)));
      }
      else {
         b_prepare_return(func_tag);
      }
   }

   b_func_epilogue(global_func_name);
   st_exit_block();
}

void encode_expr(EXPR expr)
{
    
  if (expr == NULL) {
    bug("Expression is null ");
  }
  
  switch (expr->tag) {
    case LFUN:
    case ERROR: break;
    case INTCONST: 	b_push_const_int(expr->u.intval);
      		        if(ty_query(expr->type) == TYUNSIGNEDCHAR)
			    {
				b_convert(TYSIGNEDLONGINT, TYUNSIGNEDCHAR);
      			    }
     		        break;

    case REALCONST:      b_push_const_double(expr->u.realval);
     			 break;
    case STRCONST:
  		        b_push_const_string(expr->u.strval);
                        break;
    case GID:
     			 b_push_ext_addr(st_get_id_str(expr->u.gid));
    		         break;
    case LVAR: 		b_push_loc_addr(0);

     		        int i = 0;
      			for (i = 0; i < expr->u.lvar.link_count; i++) 
			{
				b_offset(FUNC_LINK_OFFSET);
				b_deref(TYPTR);
     			 }
			b_offset(expr->u.lvar.offset);

     		        if (expr->u.lvar.is_ref == TRUE)
                          {
				b_deref(TYPTR);
      			  }
   		   
                        break;

    case NULLOP:       b_push_const_int(0);
      		       break;
   
    case UNOP:         encode_unop(expr->u.unop.op, expr);
      		       break;

    case BINOP:	       encode_binop(expr->u.binop.op, expr);
   		       break;

    case FCALL:	       encode_fcall(expr->u.fcall_or_array_access.function_or_array, expr->u.fcall_or_array_access.args_or_indices);
      		       break;
    case ARRAY_ACCESS:
                       break;
 
  }

}
void encode_unop(EXPR_UNOP op, EXPR expr)
{
  long low, high;
  TYPE baseT;
  TYPETAG tag, rval_tag;
  ST_ID id;
  TYPE type, base_type;
  BOOLEAN converted_to_int;
  
  encode_expr(expr->u.unop.operand);

  converted_to_int = FALSE;
  tag = ty_query(expr->u.unop.operand->type);
  rval_tag = ty_query(expr->type);

  switch(op)
   {

    case INDIR_OP:
    case UPLUS_OP: break;
    case CONVERT_OP:      if(tag==TYSUBRANGE) 
			    { 
				base_type = ty_query_subrange(expr->u.unop.operand->type, &low, &high);
				b_convert(TYSUBRANGE, ty_query(base_type));
      			    } 
			  else if(tag==TYPTR)
			    { 

     		            } 
			 else
			    { 
				b_convert(tag, rval_tag);
      			    }
     			 break;
     case NEG_OP:   b_negate(tag); break;
   
     case ORD_OP: if(tag==TYUNSIGNEDCHAR)
	            {
			b_convert(tag, TYSIGNEDLONGINT);
      		    }
                  break;
     case CHR_OP:
    		  if(tag==TYSIGNEDLONGINT) 
		    {
		        b_convert(tag, TYUNSIGNEDCHAR);
    		    }
                  break;
  
     case UN_SUCC_OP:   if(tag!=TYSIGNEDLONGINT)
			   {
				b_convert(tag,TYSIGNEDLONGINT);
				converted_to_int=TRUE;
     			    }
     			 b_push_const_int(1);
     			 b_arith_rel_op(B_ADD, TYSIGNEDLONGINT);
     			 if(converted_to_int==TRUE) 
			   {
				b_convert(TYSIGNEDLONGINT,tag);
    			   }
                        break;

    case UN_PRED_OP:
	                if(tag!=TYSIGNEDLONGINT)
			   {
				b_convert(tag,TYSIGNEDLONGINT);
				converted_to_int=TRUE;
      			   }

     			 b_push_const_int(-1);
      			 b_arith_rel_op(B_ADD, TYSIGNEDLONGINT);

     			 if(converted_to_int==TRUE)
			   {
				b_convert(TYSIGNEDLONGINT, tag);
     			   }
                        break;

    case NEW_OP:       b_alloc_arglist(4);
		       //b_push_const_int(get_type_size(ty_query_ptr(expr->u.unop.operand->type, &id, &type)));
                       //get_type_size function does not exist
                       b_push_const_int(getSize(ty_query_ptr(expr->u.unop.operand->type, &id, &type)));
	               b_load_arg(TYUNSIGNEDINT);
                       b_funcall_by_name("malloc", TYPTR);
                       b_assign(TYPTR);
                       b_pop();
                       break;
   
    case DISPOSE_OP:   b_load_arg(TYPTR);
                       b_funcall_by_name("free", TYVOID);
                       break;

    case DEREF_OP:     b_deref(tag);
                       break;

    case SET_RETURN_OP: b_set_return(ty_query(expr->u.unop.operand->type));
                         break;
  }
}

void encode_binop(EXPR_BINOP out, EXPR expr)
{
  TYPETAG type_tag;
  TYPETAG left_type_tag, right_type_tag;
  encode_expr(expr->u.binop.left);
  encode_expr(expr->u.binop.right);
  type_tag = ty_query(expr->type);
  left_type_tag = ty_query(expr->u.binop.left->type);
  right_type_tag = ty_query(expr->u.binop.right->type);

  switch (out) {
    case SYMDIFF_OP:
    case OR_OP:
    case XOR_OP:
    case AND_OP:  break;
    case ADD_OP:  b_arith_rel_op(B_ADD, type_tag); break;

     case SUB_OP: b_arith_rel_op(B_SUB, type_tag); break;

     case MUL_OP: b_arith_rel_op(B_MULT, type_tag);break;

     case DIV_OP: b_arith_rel_op(B_DIV, type_tag); break;

     case MOD_OP: b_arith_rel_op(B_MOD, type_tag); break;
    
     case REALDIV_OP: b_arith_rel_op(B_DIV, type_tag); break;
    
     case EQ_OP:b_arith_rel_op(B_EQ, type_tag);   break;

     case LESS_OP: b_arith_rel_op(B_LT, type_tag); break;
    
     case LE_OP: b_arith_rel_op(B_LE, type_tag); break;
    
     case NE_OP: b_arith_rel_op(B_NE, type_tag); break;
    
     case GE_OP: b_arith_rel_op(B_GE, type_tag); break;
    
     case GREATER_OP: b_arith_rel_op(B_GT, type_tag); break;
   
    case ASSIGN_OP:  if(expr->u.binop.left->tag == LVAR)
			 {
			     b_push_loc_addr(expr->u.binop.left->u.lvar.offset);
    	                  }
      
     		     if(left_type_tag != right_type_tag)
			 {
	                      b_convert(right_type_tag, left_type_tag);
                         }
     
 
    		     b_assign(left_type_tag);
      
     
     			 b_pop();
   		     break;
  }
}

void encode_fcall(EXPR func, EXPR_LIST args)
{
  int arg_list_size;
  EXPR_LIST t_arg;
  char *func_gname;
  TYPE func_ret_type;
  TYPETAG arg_tag;
  PARAM_LIST func_params;
  BOOLEAN check_args;
  
  func_ret_type = ty_query_func(func->type, &func_params, &check_args);
  arg_list_size = 0;
  t_arg = args;

  if(func->tag == GID) 
    { 
        func_gname = st_get_id_str(func->u.gid);
    }
  t_arg = args;
  while(t_arg != NULL)
     {

  	  if(ty_query(t_arg->expr->type)==TYDOUBLE||ty_query(t_arg->expr->type)==TYFLOAT)
            {
     	        arg_list_size+=8;
            } 
          else
   	    { 
   	        arg_list_size+=4;
            }

           t_arg=t_arg->next;
       }

  b_alloc_arglist(arg_list_size);
  t_arg=args;
  while(t_arg!=NULL) 
     {

  	  encode_expr(t_arg->expr);
    	  arg_tag = ty_query(t_arg->expr->type);
  	  if(func_params != NULL)
 	     {
  		    if(func_params->is_ref==TRUE)
			 { 
				if(is_lval(t_arg->expr)==FALSE)
				    {
					  bug("Function argument expected to be lval in encode_fcall_expr");
				    } 
	
				if(ty_test_equality(t_arg->expr->type, func_params->type)==FALSE) 
				    {
					   error("Parameter types do not match");
				    }
	
	
				b_load_arg(TYPTR);
    			  } 
		    else 
                         { 
				if(is_lval(t_arg->expr)==TRUE) 
                                   {
	 				 b_deref(arg_tag);
			      	   }
			       if(arg_tag==TYSIGNEDCHAR||arg_tag==TYUNSIGNEDCHAR) 
				   { 

	 				 b_convert(arg_tag,TYSIGNEDLONGINT);
					  b_load_arg(TYSIGNEDLONGINT);
				   } 
				else if(arg_tag==TYFLOAT) 
				   { 
	 				 b_convert(arg_tag,TYDOUBLE);
	 				 b_load_arg(TYDOUBLE);
				    } 
				else 
				    { 
	 				 b_load_arg(arg_tag);
				    }
    	                  }
             } 
         else 
             {     
		if(is_lval(t_arg->expr)==TRUE) 
		    {
	 		 b_deref(arg_tag);
		    }
		if(arg_tag==TYSIGNEDCHAR||arg_tag==TYUNSIGNEDCHAR) 
		    { 
	 		 b_convert(arg_tag, TYSIGNEDLONGINT);
		         b_load_arg(TYSIGNEDLONGINT);
	            } 
                else if(arg_tag==TYFLOAT)
                   { 
	  		b_convert(arg_tag,TYDOUBLE);
		        b_load_arg(TYDOUBLE);
		   } 
		else 
		   { 
		        b_load_arg(arg_tag);
		   }
              }

    t_arg=t_arg->next;

    if(func_params!=NULL) 
	{
            func_params=func_params->next;
        }

   }
  
  
  b_funcall_by_name(func_gname,ty_query(func_ret_type));


}

void encode_dispatch(VAL_LIST vals, char * label){

	VAL_LIST val;
	TYPETAG tag;
	char * match;
	long lo, hi;

	tag = vals.type;
	lo = vals.lo;
	hi = vals.hi;

	match = exit_label_stack[exit_label];

	//ensure the correct type
	if(tag != TYSIGNEDINT || tag != TYUNSIGNEDINT || tag != TYSIGNEDLONGINT || tag!= TYUNSIGNEDLONGINT){
		error("The type is incorrect for comparison");
	else {
		//check for single case
		if(lo==high){
			b_dispatch (B_EQ, tag, lo, match, true);
		}
		else{
			new_exit_label();
			char * l = exit_label_stack[exit_label];

			b_dispatch (B_LT, tag, lo, l, true);

			if(b_cond_jump (tag, B_NONZERO, l)
				b_dispatch (B_LE, tag, hi, match, true);

			b_label(l);

		}//end else

			b_label(match);
	}




}//end encode_dispatch


char * encode_for_preamble(EXPR var, EXPR init, int dir, EXPR limit){
	TYPETAG var_type = ty_query(var->type);
	TYPETAG limit_type = ty_query(limit->type);
	TYPETAG init_type = ty_query(init->tyep);
	char * label;
	/*Encodes the limit expression*/
    if(limit_type != TYSIGNEDLONGINT){
		b_convert (limit_type, TYSIGNEDLONGINT);
	}//end if

	/*Emits code to duplicate this value*/
	if(limit_type != TYSIGNEDLONGINT){
		error("conversion falied");
		return NULL;
	}
	else{
		b_duplicate (limit_type);
	}
	/*Encodes what amounts to an assignment of the initial value to the
      loop control variable*/
	if(var_type != TYSIGNEDCHAR && var_type != TYUNSIGNEDCHAR && var_type != TYSIGNEDLONGINT){
		error("Loop control is not an ordinal");
		return NULL
	}
	else
		b_assign (limit_type);

	//Emits a new "return" label
	new_exit_label();
	label = exit_label_stack[exit_label];
	b_label(label);

	/*Emits code to convert the initial value (on top of the control stack) to
      TYSIGNEDLONGING (b_convert()) if it isn't already.*/
	if(init_type != TYSIGNEDLONGINT){
		b_convert (limit_type, TYSIGNEDLONGINT);
	}

	//Emits code to compare the duplicate limit value with the top stack value

	if(dir == 0){ //less than
		b_arith_rel_op (B_LT, limit_type);
	}
	else{
		b_arith_rel_op (B_GT, limit_type);
	}
	//Emits a conditional jump on true
	b_cond_jump (limit_type, B_NONZERO, label);



	//sets values.
	b_duplicate(var_type);

	if(dir == 0)
		b_inc_dec (var_type, B_PRE_INC, 0);
	else
		b_inc_dec (var_type, B_PRE_DEC, 0);


	return var->strval;

}//end encode_for_preamble


