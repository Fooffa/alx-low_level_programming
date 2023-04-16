#include "main.h"

/**
* _memcpy - a function that copies memory area
* Return: pointer to the memory area
*@src : input as a pointer
*@dest : input as a pointer
*@n : input as a unsigned integer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
