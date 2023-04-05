#include "main.h"

/**
*_strspn -  gets the length of a prefix substring
* Return: number of bytes in the initial segment of s
*@s: input as a pointer
*@accept:input as a pointer
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, c;
	unsigned int n = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		c = 0;
		for (j = 0; *(accept + j) != '\0' ; j++)
		{
		if (accept[j] == s[i]
		{
			n++;
			c = 1;
		}
	}
	if (c == 0)
		return (n);
	}
	return (n);
}
