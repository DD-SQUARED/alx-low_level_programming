#include "main.h"
/**
* _more_numbers function prints 10 times the number
* followed by a new line
* Returns: none
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (i = 0; i < 15; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
		}
		_putchar('\n');
	}
}

