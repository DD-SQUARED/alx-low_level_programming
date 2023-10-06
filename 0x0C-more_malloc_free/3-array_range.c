#include <stdlib.h>
#include "main.h"
/**
 * *array_range - array of integers created
 * @min: least range of values stored
 * @max: element number with most range of values stored
 * Return: pointers new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = mallloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
