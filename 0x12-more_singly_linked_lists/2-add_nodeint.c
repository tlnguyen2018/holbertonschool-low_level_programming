#include "lists.h"
#include <stdio.h>

/**
 *add_nodeint - adding new node at the begining
 *listint_t - structure of the Node
 *@head : pointer of pointer head
 *@n : integer
 *Description: add Node at the begining
 *Return: address of new NODE
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (head == NULL)
		return (NULL);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
