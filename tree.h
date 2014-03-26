#ifndef TREE_C
#define TREE_C
#include "types.h" 
#include "symtab.h" 
#include "message.h" 

//definitions for a list of multiple variables
typedef struct var_id {
    ST_ID id;
    struct var_id *next;
} VAR_ID, *VAR_ID_LIST;
   
/* 
This function creates a new type name data record and installs it in the symbol table. 
It takes two parameters; the name of the type name as a char array, and a type object.
If the type name is already installed in the symbol table a warning message is issued.
*/

void create_typename(ST_ID id,TYPE new_type);

void create_gdecl(VAR_ID_LIST list,TYPE type);

TYPE check_typename( ST_ID id );

TYPE check_subrange( long a, long b);

TYPE check_array(TYPE array, INDEX_LIST i);

TYPE check_function_type(TYPE t);

PARAM_LIST check_param(PARAM_LIST p);

VAR_ID_LIST build_var_id_list (VAR_ID_LIST list,ST_ID id);

PARAM_LIST build_param_list(VAR_ID_LIST id_list,TYPE type,BOOLEAN value);

PARAM_LIST concatenate_param_list (PARAM_LIST list1,PARAM_LIST list2);

INDEX_LIST concatenate_index_lists (INDEX_LIST list1,TYPE type);

INDEX_LIST create_list_from_type(TYPE type);

void resolve_all_ptr();

#endif

