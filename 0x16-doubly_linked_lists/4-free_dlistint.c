#include "lists.h"

/**
 *free_dlistint - free dlistint
 *@dlistint_t - structure of the Node
 *@head: head
 *Description: add new node at the end
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;


	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}

}
