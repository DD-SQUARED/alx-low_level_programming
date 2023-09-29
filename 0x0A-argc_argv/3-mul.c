#include <stdio.h>
#include "main.h"

/**
 * _code - string converted to integer
 * @c: the string will be converted 
 * Return: integer from the string
 */
int _code(char *c)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (c[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (c[i] == '-')
			++d;

		if (c[i] >= '0' && c[i] <= '9')
		{
			digit = c[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (c[i + 1] < '0' || c[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - two numbers are multiplied
 * @argc: no of arguments
 * @argv: the array of arguments
 * Return: 0 success and 1 for failure
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _code(argv[1]);
	num2 = _code(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

