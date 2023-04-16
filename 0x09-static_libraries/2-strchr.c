#include "main.h"

/**
* _strchr - locates a character in a string.
* Return: pointer to the memory area s
*@s: input as a pointer
*@c:input as a character
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
