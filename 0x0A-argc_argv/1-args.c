#include <stdio.h>
#include "main.h"

/**
 * main - the number of arguments printed
 * @argc: no of arguments
 * @argv: the array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}

