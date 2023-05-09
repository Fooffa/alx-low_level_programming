#include <stdio.h>
#include <stdlib.h>
#include <elf.h>

void check_elf(unsigned char *ident);
void print_magic(unsigned char *identety);
void print_abi(unsigned char *e_ident);

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
void print_abi(unsigned char *e_ident)
{
	printf(" ABI Version: %d\n", e_ident[EI_ABIVERSION]);
}

