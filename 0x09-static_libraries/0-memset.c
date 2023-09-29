#include "main.h"
/**
 * _memset - memory filled with specific value
 * @s: address of memory
 * @b: desired value
 * @n: bytes to be changed
 * Return: changed array with bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

