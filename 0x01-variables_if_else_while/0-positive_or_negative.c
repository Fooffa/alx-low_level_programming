#include<stdlib.h>
#include<stdio.h>
#include <time.h>
/* more headers goes there
* main prints whether the number stored in the variable n is positive or negative or 0
* Return: always 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
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
