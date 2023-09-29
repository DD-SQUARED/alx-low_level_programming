#include <unistd.h>


/**
 * _putchar - char a is written to stdout
 * @c: The character to print
 * Return: 1 for success, -1 failure and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

