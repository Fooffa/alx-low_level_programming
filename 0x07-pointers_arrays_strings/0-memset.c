#include "main.h"

/**
*_memset -  fills memory with a constant byte.
* Return: pointer to the memory area s
*@s: input as a pointer
*@b:input as a character
*@n:input as a unsigned integer
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n ; i++)
		*(s + i) = b;
	return (s);
}
