#include "lists.h"
#include <stdio.h>

/**
 *add_node - add new node at the beginning of linked list
 *list_t - structure of the Node
 *@head : head
 *@str : string pointer
 *Description: print all the elements of linked list
 *Return: Address of new element
 */
void free_list(list_t *head)
{
	head = malloc(sizeof(list_t));

	if (head == NULL)
		free(head);
}
