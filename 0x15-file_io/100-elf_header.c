#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <fcntl.h>
#include <unistd.h>

void check_elf(unsigned char *identety);
void print_magic(unsigned char *identety);
void print_abi(unsigned char *identety);

/**
* check_elf - Checks if a file is an ELF file.
* @identety: A pointer to an array containing the ELF magic numbers.
* Description: If the file is not an ELF file - exit code 98.
*/
void check_elf(unsigned char *identety)
{
	int indx;

	for (indx = 0; indx < 4; indx++)
	{
		if (identety[indx] != 127 &&
		    identety[indx] != 'E' &&
		    identety[indx] != 'L' &&
		    identety[indx] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
* print_magic - Prints the magic numbers of an ELF header.
* @identety: A pointer to an array containing the ELF magic numbers.
* Description: Magic numbers are separated by spaces.
*/
void print_magic(unsigned char *identety)
{
	int indx;

	printf(" Magic: ");

	for (indx = 0; indx < EI_NIDENT; indx++)
	{
		printf("%02x", identety[indx]);
	}
}

/**
* print_abi - Prints the ABI version of an ELF header.
* @identety: A pointer to an array containing the ELF ABI version.
*/
void print_abi(unsigned char *identety)
{
	printf(" ABI Version: %d\n", identety[EI_ABIVERSION]);
}
/**
 * main - Displays the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 * the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int fd, rd, c;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read the file %s\n", argv[1]);
		exit(98);
	}
	rd = read(fd, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(header);
		close(fd);
		dprintf(STDERR_FILENO, "Error: Can't read the file %s\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_abi(header->e_ident);

	free(header);
	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", fd);
		exit(98);
	}


	return (0);
}
