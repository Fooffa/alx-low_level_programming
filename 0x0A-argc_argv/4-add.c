#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - adds positive numbers
* Return: always 0
* @argc : argument count
* @argv : argument vector
*/

int main(int argc, char *argv[])
{
	int sum = 0, i;
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i]))
		{
			printf("Error");
			return (1);
		}
			sum = sum + atoi(argv[i]);
	}	
	printf("%d\n", sum);
	return (0);
}
