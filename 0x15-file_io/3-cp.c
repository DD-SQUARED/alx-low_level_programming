#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_buffer - buffer has 1024 bytes
 * @file: filename where buffer is storing chars
 * Return: points to the new buffer
 */
char *create_buffer(char *file);
void close_file(int fd);

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Cannot write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - File is closed
 * @fd: file will be closed
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - contents copied to another file from another
 * @argc: total number of arguments passed to the program.
 * @argv: array points to arguments
 * Return: 0 for success.
 * Description: exit code 97 is used If argument count is wrong
 * If file_from exit code 98 is used if file non-exist or not readable
 * If file_to exit code 99 is used if file not created or written in
 * If file_to or file_from  exit code 100 is used if file cannot be closed
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Cannot read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Cannot write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}

