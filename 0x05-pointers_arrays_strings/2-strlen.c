#include "main.h"

/**
*_strlen - returns the length of a string
* Return: the length
* @s : input as a sring
*/

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len))
		len = len + 1;
	return (len);
}
