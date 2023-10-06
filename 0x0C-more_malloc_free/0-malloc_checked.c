#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - malloc is used to allocate memory
 * @b: allocated number of bytes
 * Return: allocated memory pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

