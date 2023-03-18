#include<stdlib.h>
#include<stdio.h>
#include <time.h>
/**
* main - prints whether the last digit of n is greater than 5, less than 6 or is 0
* Return: 0
*/
int main(void)
{
/* the variables n and b are integer*/
int n, b;
srand(time(0));
n = rand() - RAND_MAX / 2;
b = n % 10;
if (b > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, b);
}
if (b == 0)
{
printf("Last digit of %d is %d and is 0\n", n, b);
}
else if (b < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, b);
}
return (0);
}
