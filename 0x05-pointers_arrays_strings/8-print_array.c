#include "main.h"

/**
* print_array - prints n elements of an array
*of integers, followed by a new line
*@a: input as an array
*@n: input as an input
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", array[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
