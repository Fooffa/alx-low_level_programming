#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes.
* Return: pointer s
*@s: input as a pointer
*@accept:input as a pointer
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0' ; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
	}

	return (NULL);
}
