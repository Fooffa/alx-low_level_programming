#include "main.h"

/**
* *_strcat - concatenates two strings
* Return: pointer to the resulting string dest
* @dest : input as a sring
* @src : input as a sring
*/


char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i = i + 1;

	while (*(src + j) != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
