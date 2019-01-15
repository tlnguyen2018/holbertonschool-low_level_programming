#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_delete - entry point
 * @ht: hash table
 * Description: delete the hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *tmp = NULL;
	hash_node_t *save_address = NULL;

	for (index = 0; index < ht->size; index++)
	{
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			save_address = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = save_address;
		}
	}
	free(ht->array);
	free(ht);
}
