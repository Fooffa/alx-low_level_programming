#include <stdio.h>
/**
* main - prints the program's argument
* Return: always 0
* @argc : argument count
* @argv : argument vector
*/

int main(int argc  __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
