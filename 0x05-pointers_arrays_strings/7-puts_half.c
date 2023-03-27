#include "main.h"

/**
* puts_half -  prints half of a string, followed by a new line.
* @str :input as a string
*/

void puts_half(char *str)
{
	int len = 0, i, half;

	while (*(str + len))
		len = len + 1;
	half = len / 2;

	for (i = half; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}