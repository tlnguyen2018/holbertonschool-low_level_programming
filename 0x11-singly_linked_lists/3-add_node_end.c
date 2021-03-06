#include "lists.h"
#include <stdio.h>

/**
 *add_node_end - add new node at the end of linked list
 *list_t - structure of the Node
 *@head : head
 *@str : string pointer
 *Description: print all the elements of linked list
 *Return: Address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_data;
	int index;
	list_t *tmp;

	new_data = malloc(sizeof(list_t));

	if (new_data == NULL)
		return (NULL);
	if (*head == NULL)
		*head = new_data;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_data;
	}
	new_data->str = strdup(str);
	if (str == NULL)
	{
		return (NULL);
		free(new_data);
	}
	for (index = 0; str[index] != '\0'; index++)
		;
	new_data->len = index;
	return (new_data);
}
