#include "main.h"

/**
*str_concat -  concatenates two strings
*Return: pointer to a newly allocated space in memory which contains
*the contents of s1, followed by the contents of s2, and null terminated
*@s1: input as a pointer
*@s2: input as a pointer
*/

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, l;
	char *concat;

	if (s1 ==  NULL && s2 == NULL)
		return (NULL);
	if (s1 ==  NULL)
		s1 = "";
	if (s2 ==  NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	concat = malloc((i + j) * sizeof(char) + 1);
	if (concat == NULL)
		return (NULL);
	for (l = 0; l <=  i; l++)
		concat[l] = s1[l];
	for (l = 0; l <=  j; l++)
		concat[i + l] = s2[l];
	return (concat);
}
