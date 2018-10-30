#include "lists.h"
#include <stdio.h>

/**
 *print_listint - print all the elements of linked list
 *listint_t - structure of the Node
 *@h:head
 *Description: print all the elements of linked list
 *Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == '\0')
		return (0);
	while (h != NULL)
	{
		if (h->n == '\0')
			return (0);
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
