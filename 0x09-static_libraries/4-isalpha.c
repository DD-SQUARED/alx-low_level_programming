#include "main.h"

/**
 * _isalpha - traverses for alphabetic characters
 * @c: the character to be checked
 * Return: 1 letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

