#include "main.h"

/**
* _puts_recursion - prints a string
*@s: input as a pointer
*/

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\0');
		_putchar('\n');
	}
	else
	{
		_putchar(s[i]);
		s++;
		_puts_recursion(s);
	}
}
