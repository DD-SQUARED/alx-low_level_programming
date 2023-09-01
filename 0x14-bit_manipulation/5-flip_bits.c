#include "main.h"
/**
 * flip_bits - the num of bits changed to go from
 * one num to another is counted
 * @n: first num
 * @m: second num
 * Return: num of bits changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = excluusive >> i;

		if (current & 1)
			count++;
	}

	return (count);
}
