#include<stdlib.h>
#include<stdio.h>
#include <time.h>
/**
* main function :prints whether the variable n is positive or negative or 0
* Return: always 0
*/
int main(void)
{
/* the variable n is an integer*/
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
