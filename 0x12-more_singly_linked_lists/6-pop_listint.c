#include "lists.h"
#include <stdio.h>

/**
 *pop_listint - free listint_t
 *listint_t - structure of the Node
 *@head : head
 *Description: free list t
 *Return: return the head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *tmp;
	int n;

	if (head == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		tmp  = current->next;
		n = current->n;
		free(n);
		free(current);
		current = tmp;
	}
	return (n);
}
