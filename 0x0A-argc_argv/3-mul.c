#include <stdio.h>
#include <stdlib.h>

/**
* main -  multiplies two numbers
* Return: 0 if success
* @argc : argument count
* @argv : argument vector
*/

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
