#include "lists.h"

/**
 *dlistint_len - count the number of data in linked list
 *@dlistint_t - structure of the Node
 *@h:head
 *Description: count data of linked list
 *Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (EXIT_FAILURE);
	while (h != NULL)
	{
		h = h->next;
		count = count + 1;
	}
	return (count);
}
