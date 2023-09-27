#include "main.h"
#include <unistd.h>
/**
 * _putchar - character a is written to stdout
 * @a: print the character
 * Return: 1 for success , -1 for error and errno is set
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}

