#include "main.h"

/**
* leet - encodes a string
* Return: pointer to the resulting string s
* @s : input as an integer
*/
char *leet(char *s)
{
	int i = 0, j;
	char let[] = "AaEeOoTtLl";
	char num[] = "4433007711";

	while (*(s + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == let[j])
				s[i] = num[j];
		}

		i++;
	}
	return (s);
}
