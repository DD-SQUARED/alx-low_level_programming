#include "lists.h"
/**
 * find_listint_loop - loop in a linked list is searched
 * @head: search of the linked list
 * Return: address of the initial node in the loop, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;
	
	if (!head)
		return (NULL);
	
	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		
		if (fast == slow)
		{
			slow = head;

			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
}
