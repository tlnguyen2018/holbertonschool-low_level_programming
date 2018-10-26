#include "lists.h"
#include <stdio.h>

/**
 *add_node - add new node at the beginning of linked list
 *list_t - structure of the Node
 *@head : head
 *@str : string pointer
 *Description: print all the elements of linked list
 *Return: Address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_data;
	unsigned int index;

	new_data = malloc(sizeof(list_t));

	if (new_data == NULL)
		return (NULL);
	new_data->str = strdup(str);
	if (str == NULL)
	{
		return (NULL);
		free(new_data);
	}
	for (index = 0; str[index] != '\0'; index++)
		;
	new_data->len = index;
	new_data->next = *head;
	*head = new_data;
	return (new_data);
}
