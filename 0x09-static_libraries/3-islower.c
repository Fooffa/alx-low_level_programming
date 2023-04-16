#include"main.h"
/**
* _islower - checks for lowercase character
* Return: 1 if c in lowercase. 0 if not
* @c: the code ascii of the character
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
