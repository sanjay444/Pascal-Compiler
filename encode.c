#include <stdlib.h>
#include <stdio.h>
#include "encode.h"


void simple_allocate_space (char *id, TYPE type)
{
	int size = simple_size (type);
	int alignment = size;
	if (size != 0){
		b_global_decl (*id, alignment, size);
	else
		error("This is an invalid type name);
	}
}

int simple_size (TYPE type)
{
	switch (type)
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
