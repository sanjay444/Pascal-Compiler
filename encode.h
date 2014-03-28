#ifndef ENCODE_H
#define ENCODE_H
#include "types.h"
#include "symtab.h"
#include "message.h"




/*set the size and alignment with b_global_decl for basic types*/

void simple_allocate_space (char *id, TYPE type);

/*set the size and alignment with b_global_decl for arrays*/

void array_allocate_space (char *id, TYPE array, INDEX_LIST *i);

/*set the size and alignment with b_global_decl for subrange*/

void subrange_allocate_space (char *id, TYPE type, long *low, long *high);


#endif
