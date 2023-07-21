#include "main.h"
#include <stdio.h>
/**
* fizz_buzz: function prints the numbers 1-100 , in multiples of 3
* main - the word fizz is printed when each multiple of 3 is reached
* Main - Fizz Buzz is printed when the number is a multiple of 3 and 5
* Return: 0
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
		{
			printf("Fizz Buzz");

		}
		else if ((num % 3) == 0)
		{
			printf("Fizz");

		}
		else if ((num % 5) == 0)
		{
			printf("Buzz");

		}
		else
		{
			printf("%d", num);
		}
		if (num == 100)
		{
			continue;
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}

