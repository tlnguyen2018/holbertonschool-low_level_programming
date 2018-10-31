#include "lists.h"
#include <stdio.h>

/**
 *insert_nodeint_at_index - entry point
 *listint_t - structure of the Node
 *@head : head
 *@idx : index
 *@n : integer n
 *Description: insert node at certain index
 *Return: address of new node or Null if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL;
	listint_t *early = NULL;
	listint_t *current = NULL;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	early = *head;

	if (idx == 0)
	{
		*head = new_node;
		new_node->next = early;
		return (new_node);
	}
	while ((count < (idx - 1)) && (early != NULL))
	{
		count++;
		early = early->next;
	}
	if (early == NULL)
	{
		return (NULL);
	}
	current = early->next;
	early->next = new_node;
	new_node->next = current;
	return (new_node);
}
