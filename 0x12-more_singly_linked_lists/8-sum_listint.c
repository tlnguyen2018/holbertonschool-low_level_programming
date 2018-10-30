#include "lists.h"
#include <stdio.h>

/**
 *sum_listint - entry point
 *listint_t - structure of the Node
 *@head : head
 *Description: sum of all the data
 *Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	int i;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		i = head->n;
		sum = sum + i;
		head = head->next;
	}
	return (sum);
}
