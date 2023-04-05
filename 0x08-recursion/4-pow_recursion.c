#include "main.h"

/**
*_pow_recursion - calculate the value of x raised to the power of y
*Return: the value of x raised to the power of y
*@x: input as an integer
*@y: input as an integer
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
