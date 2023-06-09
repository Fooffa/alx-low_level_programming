#include "main.h"

/**
*cap_string - capitalizes all words of a string
* Return: pointer to the resulting string s
* @s : input as an integer
*/

char *cap_string(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (s[i - 1] == ' ' ||
			s[i - 1] == '\t' ||
			s[i - 1] == '\n' ||
			s[i - 1] == ',' ||
			s[i - 1] == ';' ||
			s[i - 1] == '.' ||
			s[i - 1] == '!' ||
			s[i - 1] == '?' ||
			s[i - 1] == '"' ||
			s[i - 1] == '(' ||
			s[i - 1] == ')' ||
			s[i - 1] == '{' ||
			s[i - 1] == '}' ||
			i == 0)
				s[i] = s[i] - 32;
		}

		i++;

	}
	return (s);
}
