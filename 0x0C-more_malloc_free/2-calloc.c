#include "main.h"

/**
*_calloc -  allocates memory for an array, using malloc
*Return: a pointer to the allocated memory
*@nmemb:input as an unseigned int
*@size: input as an unseigned int
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		array[i] = 0;
	return (array);
}
