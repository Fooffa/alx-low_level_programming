#include "main.h"

/**
*_strdup -  returns a pointer to a newly allocated space in memory,
*which contains a copy of the string given as a parameter.
*Return: a pointer to a newly allocated space in memory
*@str: input as a pointer
*/

char *_strdup(char *str)
{
	int i = 0, j;
	char *A;

	if (str ==  NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	A = malloc(i * sizeof(char));

	if (A == NULL)
		return (NULL);
	for (j = 0; j <=  i; j++)
	{
		A[j] = str[j];
	}
	return (A);
}
