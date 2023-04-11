#include "main.h"

/**
*create_array - creates an array of chars
*and initializes it with a specific char.
*Return: a pointer to the array
*@size: input as an unsigned integer
*@c: input a char
*/

char *create_array(unsigned int size, char c)
{
	int i;
	char *A = malloc(size * sizeof(char));

	if (size ==  0 || A == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		A[i] = c;
	return (A);
}
