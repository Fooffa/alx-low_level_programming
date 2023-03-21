#include"main.h"
/**
* jack_bauer - prints every minute of the day of Jack Bauer
*/
void jack_bauer(void)
{
int i, j, k, l;
for (i = 0; i <= 2; i++)
{
for (j = 0; j <= 9; j++)
{
for (k = 0; k <= 5; k++)
{
for (l = 0; l <= 9; l++)
{
if (i >= 2 && j >= 4)
break;
putchar (i + 48);
putchar (j + 48);
putchar (':');
putchar (k + 48);
putchar (l + 48);
putchar ('\n');
}
}
}
}
}
