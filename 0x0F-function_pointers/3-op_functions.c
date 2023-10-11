#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the result of two added numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference of two numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the product of two numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the quotient of two numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the modulo of two numbers
 * @a: The first number.
 * @b: The second number.
 * Return: modulo of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

