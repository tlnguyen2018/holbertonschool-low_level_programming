#include "lists.h"
#include <stdio.h>

/**
 *get_nodeint_at_index - entry point
 *listint_t - structure of the Node
 *@index : index
 *@head : head
 *Description: return the nth node
 *Return: return the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	for (count = 0; count < index; count++)
	{
		head = head->next;
	}
	if (count == index)
		return (head);
	return (NULL);
}
