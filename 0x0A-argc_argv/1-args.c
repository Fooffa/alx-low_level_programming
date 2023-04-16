#include <stdio.h>

/**
* main - prints he number of arguments passed into it
* Return: always 0
* @argc : argument count
* @argv : argument vector
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
