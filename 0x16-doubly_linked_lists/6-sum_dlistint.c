#include "lists.h"

/**
 *sum_dlistint - function return sum of all data
 *@dlistint_t - structure of the Node
 *@head: head
 *Description: sum of all data
 *Return: value of sum
 */
int sum_dlistint(dlistint_t *head)
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
