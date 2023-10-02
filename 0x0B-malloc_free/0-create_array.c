#include "main.h"
#include <stdlib.h>
/**
 * create_array - character c is assigned and array of size is created
 * @size: array size
 * @c: assigned character
 * Return: pointer to the array,otherwise NULL for fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

