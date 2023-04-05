#include "main.h"

/**
*factorial - calculate the factorial of a given number.
*Return: the factorial of a given number
*@n: input as an integer
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));

}
