#include "main.h"
#include <unistd.h>
/**
  *_putchar - writes the character c
  *@c: The character to be printed
  *Return: )
  * On error : -1 is returned and error is set appropriately
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

