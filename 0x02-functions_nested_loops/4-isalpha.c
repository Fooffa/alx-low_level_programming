#include"main.h"
#include"main.h"
/**
* _isalpha - checks for character
* Return: 1 if c is an alphabet. 0 if not
* @c: the code ascii of the character
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
