#include"main.h"
/**
* print_sign - prints the sign of a number.
* Return: 1 and prints + if number is greater than zero
*: 0 and prints 0 if number is zero
*: -1 and prints - if number is less than zero
* @n: the code ascii of the character
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
}
