#include "lists.h"
#include <stdio.h>

/**
 *print_len - print all the elements of linked list
 *list_t - structure of the Node
 *@h:head
 *Description: print all the elements of linked list
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}
