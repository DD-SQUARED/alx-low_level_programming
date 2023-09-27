#include "main.h"
/**
 * _strlen_recursion - length of string
 * @c: the measured string
 * Return: string length
 */
int _strlen_recursion(char *c)
{
	int longit = 0;

	if (*c)
	{
		longit++;
		longit += _strlen_recursion(c + 1);
	}

	return (longit);
}

