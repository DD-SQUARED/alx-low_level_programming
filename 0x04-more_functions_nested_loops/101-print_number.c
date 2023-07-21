#include "main.h"
/**
 * _print_number function prints an integer
 * @n: the integers to be printed
 * Returns: none
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)

		print_number(num / 10);

	_putchar((num % 10) + '0');
}

