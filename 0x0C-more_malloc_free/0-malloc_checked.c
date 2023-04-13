#include "main.h"

/**
*malloc_checked -  allocates memory using malloc
*Return: a pointer to the allocated memory
*@b:input as an unseigned int
*/

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
