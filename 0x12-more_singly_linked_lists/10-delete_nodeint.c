#include "lists.h"
#include <stdio.h>

/**
 *delete_nodeint_at_index - entry point
 *listint_t - structure of the Node
 *@head : head
 *@index : index
 *Description: delete the node at index
 *Return: 1 if succeed and -1 if fail{
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *before;
	listint_t *after;
	unsigned int i;

	if (head == NULL || (*head) == NULL)
		return (-1);
	after = (*head)->next;
	before = *head;
	if (index == 0)
	{
		free(before);
		*head = after;
		return (1);
	}
	if (after != NULL)
		after = after->next;
	for (i = 1; i < index && after != NULL; i++)
	{
		before = before->next;
		after = after->next;
	}

	if (i == index)
	{
		free(before->next);
		before->next = after;
		return (1);
	}
	return (-1);
}
