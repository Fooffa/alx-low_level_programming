#include "main.h"

/**
*array_range - creates an array of integers.
*Return: a pointer to the array
*@min:input as an int
*@max: input as an int
*/

int *array_range(int min, int max)
{
	int *array;
	int range, i;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	array = malloc(range * sizeof(int));
	if (array == NULL)
		return (NULL);
	array[0] = min;
	for (i = 1; i < range; i++)
		array[i] = array[i - 1] + 1;
	return (array);
}
