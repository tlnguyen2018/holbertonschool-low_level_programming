#include "lists.h"

/**
 *get_dnodeint_at_index - function return node at nth
 *@dlistint_t - structure of the Node
 *@head: head
 *@index: index at the nth
 *Description: return node at index
 *Return: value at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *tmp;

	if (head == NULL)
		return (NULL);
	tmp = head;
	while (count != index)
	{
		tmp = tmp->next;
		count = count + 1;
		if (tmp == NULL)
			return (NULL);
	}
	return (tmp);
}
