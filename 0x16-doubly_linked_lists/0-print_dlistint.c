#include "lists.h"
#include <stdio.h>

/**
 *print_dlistint - print the linked list and count the number of data
 *@dlistint_t - structure of the Node
 *@h:head
 *Description: print all the elements of linked list and number of data
 *Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count = count + 1;
	}
	return (count);
}
