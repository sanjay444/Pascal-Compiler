#include <stdlib.h>
#include "tree.h"
#include <stdio.h>

/* This function builds a new Typename */

void create_typename(ST_ID id,TYPE new_type)
{
	ST_DR new_data_rec;
	new_data_rec= stdr_alloc();

	/* Fill the fields of the new symbol table data record*/
	new_data_rec->tag=TYPENAME;
	new_data_rec->u.typename.type=new_type;

	/* Install the new data record in the symbol table*/
	if (!st_install(id,new_data_rec)) {
		/* Issue an error message */
		error("This Type name is already installed");
	}

}

