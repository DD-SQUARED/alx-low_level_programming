#include "main.h"
#include <unistd.h>
/**
 * _putchar - char c is written to stdout
 * @c: printed character
 * Return: 1 success, -1 error, errno set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

