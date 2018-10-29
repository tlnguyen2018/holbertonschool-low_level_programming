#include "lists.h"
#include <stdio.h>

/**
 *listint_len - lenght of linked list
 *listint_t - structure of the Node
 *@h:head
 *Description: length of linked list
 *Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n == '\0')
			return (0);
		h = h->next;
		count++;
	}
	return (count);
}
