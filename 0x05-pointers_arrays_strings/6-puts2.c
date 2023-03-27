#include "main.h"

/**
*puts2 - prints every other character of a string
*@str: input as a string
*/

void puts2(char *str)
{
	int len = 0, i;

	while (*(str + len))
		len = len + 1;

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
	}
	_putchar('\n');
}
