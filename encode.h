#ifndef ENCODE_H
#define ENCODE_H
#include "types.h"  
#include "symtab.h" 
#include "message.h" 
#include "tree.h"



/*set the size and alignment with b_global_decl for basic types*/

void simple_allocate_space (TYPE type);  

void array_allocate_space (TYPE array, INDEX_LIST i);

#endif
