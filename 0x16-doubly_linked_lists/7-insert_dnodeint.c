#include "lists.h"

/**
 *insert_dnodeint_at_index - add new node at index
 *@dlistint_t - structure of the Node
 *@h: head
 *@n: added value
 *@idx: index
 *Description: add new node at the index
 *Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *before, *after;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	before = *h;
	after = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		*h = new_node;
		new_node->next = after;
		if (after != NULL)
			after->prev = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	if (after != NULL)
		after = after->next;
	else
		return (NULL);
	for (i = 1; after != NULL && i < idx; i++)
	{
		before = before->next;
		after = after->next;
	}
	if (i == idx)
	{
		before->next = new_node;
		new_node->prev = before;
		new_node->next = after;
		if (after)
			after->prev = new_node;
		return (new_node);
	}
	return (NULL);
}
