#include "main.h"

/**
*read_textfile - reads a text file and prints it to the POSIX standard output.
*@filename: the name of the text file
*@letters: the number of letters it should read and print
*Return:  the actual number of letters it could read and print
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
	buf = malloc(letters * sizeof(char));
	let_rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, let_rd);
	close(fd);
	return (wr);
}
