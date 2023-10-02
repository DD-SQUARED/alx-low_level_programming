#include "main.h"
#include <unistd.h>
/**
 * _putchar - character c  is written to stdout
 * @c: the printed character
 * Return: 1 for success, -1 error and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

