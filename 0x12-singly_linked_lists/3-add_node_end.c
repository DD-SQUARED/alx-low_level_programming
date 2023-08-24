#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - new node added to end of linked list
 * @head: double the pointer to list_t list
 * @str: string in new node
 *
 * Return: address new element, or NULL for failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	new = malloc(sizeof(list_t));

	if (!new)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	return (new);
}

