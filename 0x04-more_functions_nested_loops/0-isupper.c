#include "main.h"
/**
 * _isupper - function  programme checks for lowercase characters
 * @c: Variable text
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
