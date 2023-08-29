#include "lists.h"
/**
 * free_listint2 - linked list set free
 * @head: points to the listint_t list that’s freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	
	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
