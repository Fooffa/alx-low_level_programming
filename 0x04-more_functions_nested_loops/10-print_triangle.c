#include "main.h"

/**
* print_triangle -  prints a triangle
*@size : input as an integer
*/

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = size; i >= 1; i--)
		{
			for (j = 1; j < i; j++)
				_putchar(32);
			for (k = 0; k <= (size - i); k++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
