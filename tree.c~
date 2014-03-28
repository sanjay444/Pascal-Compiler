#include <stdlib.h>
#include "tree.h"
#include <stdio.h>

/* This function builds a new Typename */

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

