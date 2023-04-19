#include "function_pointers.h"

/**
*array_iterator -  executes a function given
*as a parameter on each element of an array.
*@array:input as an array
*@size:input as a size_t
*@action: input as a function pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);

}
