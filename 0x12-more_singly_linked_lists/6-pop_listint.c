#include "lists.h"
#include <stdio.h>

/**
 *pop_listint - free listint_t
 *listint_t - structure of the Node
 *@head : head
 *Description: free list t
 *Return: return the head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	int i;

	if (*head == '\0')
		return (0);

	tmp = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = tmp;

	return (i);
}
