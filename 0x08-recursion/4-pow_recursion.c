#include "main.h"
/**
 * _pow_recursion -  a raised to the power of b
 * @a: raised value
 * @b: power
 * Return: result of the power
 */
int _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);
	return (a * _pow_recursion(a, b - 1));
}

