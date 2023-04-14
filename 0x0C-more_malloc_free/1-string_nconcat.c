#include "main.h"

/**
*string_nconcat - concatenates two strings
*Return: pointer that pointes to a newly allocated space in memory
*@s1: input a pointer
*@s2: input as a pointer
*@n: input as an unsigned int
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i;
	char *nconcat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n > len2)
		n = len2;
	nconcat = malloc(sizeof(char) * (len1 + n + 1));
	if (nconcat == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		nconcat[i] = s1[i];
	for (i = 0; i < n; i++)
		nconcat[len1 + i] = s2[i];
	nconcat[len1 + i] = '\0';
	return (nconcat);
}
