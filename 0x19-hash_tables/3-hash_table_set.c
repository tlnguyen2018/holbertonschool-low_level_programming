#include "hash_tables.h"

/**
 * hash_table_set - entry point
 * @key: key of item
 * @value: value of item
 * @ht: added item
 * Description: add an item into the hash table
 * Return: 1 for sucess or 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *add_node = NULL;
	hash_node_t *head = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];

	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			return (1);
		}
		head = head->next;
	}
	add_node = malloc(sizeof(hash_node_t));
	if (add_node == NULL)
	{
		free(add_node);
		return (0);
	}
	add_node->key = strdup(key);
	if (add_node->key == NULL)
		return (0);
	add_node->value = strdup(value);
	add_node->next = ht->array[index];
	ht->array[index] = add_node;
	return (1);
}
