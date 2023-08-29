#include "lists.h"
/**
 * sum_listint - sum of all data in listint_t list calculated
 * @head: first node in the linked list
 * Return: result of sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
