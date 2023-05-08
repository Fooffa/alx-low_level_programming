#include "main.h"

/**
*get_bit - returns the value of a bit at an index in a decimal number
*@n: number to search
*@index: index of the bit
*Return: value of the bit
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t wr;
	ssize_t let_rd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters * sizeof (char));
	let_rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, let_rd);
	close(fd);
	return (wr);
}
