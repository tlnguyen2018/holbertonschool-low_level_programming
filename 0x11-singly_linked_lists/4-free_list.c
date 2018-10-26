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
	head = malloc(sizeof(list_t));

	if (head == NULL)
		free(head);
}
