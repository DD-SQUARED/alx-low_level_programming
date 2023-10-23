#include "lists.h"
/**
 * pop_listint - removes head node in a linked list
 * @head: points to the first element of the linked list
 * Return: data elements that were deleted,or 0 for empty
 */
int pop_listint(listint_t **head)
{
 listint_t *temp;
 int num;

 if (!head || !*head)
 return (0);

 num = (*head)->n;
 temp = (*head)->next;
 free(*head);
 *head = temp;

 return (num);
}

