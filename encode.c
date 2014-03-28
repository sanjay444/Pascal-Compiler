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

void array_allocate_space (char *id, TYPE array, INDEX_LIST *i)
{
	TYPE simple_type = ty_query_array (array, *i);

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


int simple_size (TYPE type)
{
	int inttype = (int)ty_query(type);
	switch (inttype)
	{
	case TYUNSIGNEDCHAR:
	case TYSIGNEDCHAR:
		return 1;
		break;
	case TYFLOAT:
	case TYSIGNEDLONGINT:
	case TYSIGNEDSHORTINT:
	case TYSIGNEDINT:
	case TYUNSIGNEDLONGINT:
	case TYUNSIGNEDSHORTINT:
	case TYUNSIGNEDINT:
	case TYPTR:
		return 4;
		break;
	case TYDOUBLE:
	case TYLONGDOUBLE:
		return 8;
		break;
	default:
		return 0;
	}
}
