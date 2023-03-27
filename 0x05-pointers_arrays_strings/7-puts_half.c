#include "main.h"

/**
* puts_half -  prints half of a string, followed by a new line.
* @str :input as a string
*/

void puts_half(char *str)
{
	int len = 0, half;

	while (*(str + len))
		len = len + 1;
	if (len % 2 == 1)
	{	
		half = (len - 1) / 2;
		half++;
	}
	else
		half = len / 2;
	for (; half < len ; half++)
	{
		_putchar(*(str + half));
	}
	_putchar('\n');
}
