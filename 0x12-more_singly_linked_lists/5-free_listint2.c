#include "lists.h"
#include <stdio.h>

/**
 *free_listint2 - free listint_t
 *listint_t - structure of the Node
 *@head : head
 *Description: free list t
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *tmp;

	while (current != NULL)
	{
		tmp  = current->next;
		free(current);
		current = tmp;
	}
	*head = NULL;
}
