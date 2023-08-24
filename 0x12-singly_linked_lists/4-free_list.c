#include <stdlib.h>
#include "lists.h"

/**
 * free_list - linked list frred and returns nothing
 * @head: list_t list freed
 * return: 0
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}

	return (0)
}

