#include "main.h"

/**
* swap_int - swaps the values of two integers
* @a : input as a pointer
* @b : input as a pointer
*/

void swap_int(int *a, int *b)
{
	int *c = NULL;

	*c = *a;
	*a = *b;
	*b = *c;

}
