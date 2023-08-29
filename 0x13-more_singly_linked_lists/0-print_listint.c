#include "lists.h"
/**
 * print_listint - elements of the linked list are printed
 * @h: linked list for listint_t are to be printed
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
