#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Text file read; printed to STDOUT
 * @filename: reading the text file
 * @letters: num of letters read
 * Return: w- num of bytes read and printed
 * 0 for failure or when the filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

