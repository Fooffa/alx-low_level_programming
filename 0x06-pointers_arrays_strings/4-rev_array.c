#include "main.h"

/**
* reverse_array - everses the content of an array of integers
* @a : input as an array
* @n : input as an integer
*/

void reverse_array(int *a, int n)
{
	int i, j, l;

	l = n - 1;
	for (i = 0; i < (n / 2); i++)
	{
		j = a[i];
		a[i] = a[l - i];
		a[l - i] = j;
	}
}
