#ifndef ENCODE_H
#define ENCODE_H
#include "types.h"
#include "symtab.h"
#include "message.h"
#include "tree.h"

/* base offset (from %fp) fro all local vars in a function */
extern int base_offset_stack[BS_DEPTH];
extern int bo_top;


/*set the size and alignment with b_global_decl for basic types*/

void simple_allocate_space (char *id, TYPE type);

int getSize(TYPE type);

/*set the size and alignment with b_global_decl for arrays*/

void array_allocate_space (char *id, TYPE array, INDEX_LIST *i);

/*set the size and alignment with b_global_decl for subrange*/

void subrange_allocate_space (char *id, TYPE type, long *low, long *high);

void decl(TYPE type, VAR_ID_LIST list_id);

int get_array_size(TYPE type, int);

void enter_main_body();
void exit_main_body();

#endif
