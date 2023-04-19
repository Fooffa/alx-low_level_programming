#include "function_pointers.h"

/**
*print_name -  prints a name.
*@name:input as a char
*@f: input as a function pointer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1) ;
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
				return (i);
	}
	return (-1);
}
