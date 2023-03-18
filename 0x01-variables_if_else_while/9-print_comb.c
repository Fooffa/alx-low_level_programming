#include<stdio.h>
/**
* main - prints all possible combinations of single-digit numbes
* Return: always 0
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar (i + '0');
putchar (',');
putchar (' ');
}
putchar('\n');
return (0);
}

