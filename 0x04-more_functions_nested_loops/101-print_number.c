#include"main.h"

/**
*print_number - prints an integer
*@n : input as an integer
*/

void print_number(int n)
{
	if (n >= 0)
	{
		if (n > 9)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		else
			_putchar(n + '0');
	}
	if (n < 0)
	{
		n = n * -1;
		if (n > 9)
		{
			_putchar(45);
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		else
		{
			_putchar(45);
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
