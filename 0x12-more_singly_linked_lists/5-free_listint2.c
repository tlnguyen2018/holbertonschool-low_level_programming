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
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}
	if ((*head) == NULL)
	{
		return;
	}
	tmp = *head;
	while (*head != NULL)
	{
		tmp = tmp->next;
		free(*head);
		(*head) = tmp;
	}
}
