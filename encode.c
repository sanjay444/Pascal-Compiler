#include <stdlib.h>
#include <stdio.h>
#include "encode.h"


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

int simple_size (TYPE type)
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
