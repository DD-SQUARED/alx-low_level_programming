#include "lists.h"
/**
 * add_nodeint - new node added to the linked list's starting point.
 * @head: points to the first node
 * @n: data to be inserted in node
 * Return: points to the new node,  NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
 listint_t *new;

 if (!new)
 return (NULL);

 new->n = n;
 new->next = *head;
 *head = new;

 return (new);
}

