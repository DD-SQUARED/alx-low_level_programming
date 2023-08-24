#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of elements in the  linked list
 * @h: pointers to list_t 
 *
 * Return: the elements in m
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
} 

