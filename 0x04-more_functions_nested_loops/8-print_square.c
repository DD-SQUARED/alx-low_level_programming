#include "main.h"
/**
* _print_square function prints a square
* @n: the number of times \ should be printed
* Returns: none
*/

void print_square(int size)
{
	int x, y;

	y = 0;

	if (size < 1)
		_putchar('\n');
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}

