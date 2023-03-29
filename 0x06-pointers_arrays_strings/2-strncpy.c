#include "main.h"

/**
* _strncpy - that copies a string
* Return: pointer to the resulting string dest
* @dest : input as a sring
* @src : input as a sring
* @n : input as an integer
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j;

	for (j = 0; j < n; j++)
	dest[j] = src[j];

	return (dest);
}
