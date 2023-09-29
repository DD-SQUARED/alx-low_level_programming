#include <stdio.h>
#include "main.h"

/**
 * _putchar - char a is written to stdout
 * @a: prints the char
 * Return: 1 for success, -1 failure and errno is set
 */
int _putchar(char a)
{
return (write(1, &a, 1));
}

