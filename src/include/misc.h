#ifndef MISC_H
#define MISC_H

#include "gf.h"

inline int bit_length(unsigned int a)
{
	int length = 0;

	while (a > 0)
	{
		length++;
		a >>= 1;
	}

	return length;
}

inline int degree(unsigned int a)
{
	return bit_length(a) - 1;
}

#endif
