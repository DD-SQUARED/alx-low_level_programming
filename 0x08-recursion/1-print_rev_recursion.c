#include "main.h"
/**
 * _print_rev_recursion - string is printed in reverse
 * @c: printed string
 */
void _print_rev_recursion(char *c)
{
	if (*c)
	{
		_print_rev_recursion(c + 1);
		_putchar(*c);
	}
}

