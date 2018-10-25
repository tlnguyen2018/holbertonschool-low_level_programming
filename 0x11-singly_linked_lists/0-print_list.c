#include "lists.h"
#include <stdio.h>

/**
 *print_list - print all the elements of linked list
 *list_t - structure of the Node
 *@h:head
 *Description: print all the elements of linked list
 *Return: number of elements
 */
size_t print_list(const list_t *h)
{
	unsigned int count;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u]%s\n", h->len, h->str);
		h = h->next;
		count += 1;
	}
	return (count);
}
