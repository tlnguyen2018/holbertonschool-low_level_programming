#include "lists.h"

/**
 *add_dnodeint - add new node at the begining
 *@dlistint_t - structure of the Node
 *@head: head
 *@n: added value
 *Description: add new node at the begining
 *Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	tmp = *head;
	new_node->next = tmp;
	*head = new_node;
	if (tmp != NULL)
		tmp->prev = *head;

	return (new_node);
}
