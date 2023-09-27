#include "main.h"
/**
 * _puts_recursion - similar to puts()
 * @c: input
 * Return: 0
 */
void _puts_recursion(char *c)
{
	if (*c)
	{
		_putchar(*c);
		_puts_recursion(c + 1);
	}

	else
		_putchar('\n');
}

