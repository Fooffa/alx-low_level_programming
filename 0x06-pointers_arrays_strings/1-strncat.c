#include "main.h"

/**
* _strncat - concatenates two strings
* Return: pointer to the resulting string dest
* @dest : input as a sring
* @src : input as a sring
* @n: input as an integer
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i = i + 1;

	while (j < n && *(src + j) != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);

}
