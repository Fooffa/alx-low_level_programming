#include "main.h"

/**
*_strcpy - copies the string pointed to by src,
*to the buffer pointed to by dest
* Return: the copy as a string
*@dest: input as a string
*@src:input as a string
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (*(src + i))
		i = i + 1;
	for (j = 0; j <= i; j++)
		dest[j] = *(src + j);
	return (dest);
}
