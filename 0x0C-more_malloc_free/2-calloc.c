#include <stdlib.h>
#include "main.h"
/**
 * *_memset - memory filled with constant byte
 * @s: filled memory area
 * @b: copied char
 * @n: no of times b is copied
 * Return: memory area s pointed
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc -  array allocated memory
 * @nmemb: array's number of elements
 * @size: element size of each
 * Return: points to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

