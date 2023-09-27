#include "main.h"

int actual_prime(int n, int i);
/**
 * is_prime_number -determines if prime no.
 * @n: evaluate number
 * Return: 1 is prime no, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - recursively determines if no. is prime
 * @n: evaluate number
 * @i: iterator
 * Return: 1 n is prime, otherwise 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

