#include "main.h"

/**
*_strdup -  returns a pointer to a newly allocated space in memory,
*which contains a copy of the string given as a parameter.
*Return: a pointer to a newly allocated space in memory
*@str: input as a pointer
*/

char *_strdup(char *str)
{
	int i = 0;
	char *A = malloc(sizeof(str));

	if (str ==  NULL || A == NULL)
		return (NULL);
	while (*(str + i) != '\0')
	{
		A[i] = str[i];
		i++;
	}
	return (A);
}
