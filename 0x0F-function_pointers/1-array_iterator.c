#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - each array element is printed
 * @array: array
 * @size: number of printed element
 * @action: pointer prints in hex or regular
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

