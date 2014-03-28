#include <stdlib.h>
#include "tree.h"
#include <stdio.h>

// This function builds a new Typename 

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
		error("variable should have a datatype");
		
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
TYPE check_subrange(long a, long b) {
	if (a < b) {
		return ty_build_subrange(ty_build_basic(TYSIGNEDLONGINT), a, b);
	}
	//error("Invalid subrange %i .. %i", a, b);
	error("Empty subrange in array index");
	error("Illegal index type (ignored)");
	//return NULL;
	return ty_build_basic(TYERROR);
}

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



