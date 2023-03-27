#include "main.h"

/**
*print_rev -  prints a string, in reverse, followed by a new line
*@s : input as a string
*/

void print_rev(char *s)
{
	int len = 0;
	int i = 0;

	while (*(s + len))
		len = len + 1;

	for (i = len - 1 ; i >= 0 ; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
