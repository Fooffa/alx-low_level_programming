#include<stdio.h>
/**
* main -  prints the alphabet in lowercase
* Return: always 0
*/
int main(void)
{
char i, a;
for (i = 0; i < 10; i++)
{
putchar (i + '0');
}
for (i = 'a'; i <= 'f'; i++)
{
putchar (i);
}
putchar('\n');
return (0);
}
