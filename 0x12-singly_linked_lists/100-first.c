#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * sentence - prints a sentence using printf
 */
void sentence(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

