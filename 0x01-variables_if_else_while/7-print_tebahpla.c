#include<stdio.h>
/**
* main -  prints the alphabet in lowercase
* Return: always 0
*/
int main(void)
{
char i;
for (i = 122; i >= 97; i--)
{
putchar (i);
}
putchar('\n');
return (0);
}
