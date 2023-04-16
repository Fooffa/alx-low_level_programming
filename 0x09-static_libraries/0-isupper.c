#include"main.h"
/**
* _isupper - checks for uppercase character
* Return: 1 if c in uppercase. 0 if not
* @c: the code ascii of the character
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return (1);
	else
	return (0);
}
