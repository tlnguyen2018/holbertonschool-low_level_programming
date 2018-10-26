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
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
