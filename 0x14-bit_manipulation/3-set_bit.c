#include "main.h"
/**
 * set_bit - bit at a specific index is set to 1
 * @n: num to change is pointed at
 * @index: set to 1 , the index of the bit
 * Return: 1 success, -1 fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

