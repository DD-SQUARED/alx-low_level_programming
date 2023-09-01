#include "main.h"

/**
 * clear_bit - changes the value of a specified bit to 0
 * @n: points to the num to be changed
 * @index: index of bit to be cleared
 * Return: 1 success, -1 fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

