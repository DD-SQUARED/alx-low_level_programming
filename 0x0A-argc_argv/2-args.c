#include <stdio.h>
#include "main.h"

/**
 * main - all received arguments are printed
 * @argc: no of arguments
 * @argv: the array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

