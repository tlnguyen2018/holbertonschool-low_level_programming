#include "lists.h"
#include <stdio.h>

/**
 *free_listint - free listint_t
 *listint_t - structure of the Node
 *@head : head
 *Description: free list t
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	if (head == NULL)
	{
		;
	}
}
