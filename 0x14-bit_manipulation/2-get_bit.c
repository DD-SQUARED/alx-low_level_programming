#include "main.h"
/**
 * get_bit - at an index in a decimal num a value of bit is returned
 * @n: num to be searched
 * @index: bit index
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

