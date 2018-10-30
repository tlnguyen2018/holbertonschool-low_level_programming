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

	if (head == '\0')
	{
		return;
	}
	if ((*head) == '\0')
	{
		return;
	}
	while (current != NULL)
	{
		tmp  = current;
		current = current->next;
		free(tmp);
	}
	*head = NULL;
}
