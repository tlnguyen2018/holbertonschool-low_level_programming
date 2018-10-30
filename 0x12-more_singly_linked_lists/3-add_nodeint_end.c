#include "lists.h"
#include <stdio.h>

/**
 *add_nodeint_end - adding new node at the end
 *listint_t - structure of the Node
 *@head : pointer of pointer head
 *@n : integer
 *Description: add Node at the end
 *Return: address of new NODE
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		*head = new_node;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}
	return (new_node);
}
