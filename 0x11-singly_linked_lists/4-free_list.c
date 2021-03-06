#include "lists.h"
#include <stdio.h>

/**
 *free_list - free list_t
 *list_t - structure of the Node
 *@head : head
 *Description: free list t
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	head = NULL;
}
