#include "main.h"
/**
* _print_line function prints a line
* @n: the number of times _ should be printed
* Returns: none
*/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

