#include <stdio.h>
#include "main.h"

/**
 * main - program name is printed
 * @argc: arguments number
 * @argv: the array of the arguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

