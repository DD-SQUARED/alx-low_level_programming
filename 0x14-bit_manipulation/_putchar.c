#include "main.h"
#include <unistd.h>
/**
 * _putchar - stdout is updated with the character C
 * @c: character to be printed
 * Return: 1 for success, otherwise -1 for error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

