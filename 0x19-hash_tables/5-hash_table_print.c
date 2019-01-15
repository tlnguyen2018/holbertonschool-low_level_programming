#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - entry point
 * @ht: hash table
 * Description: print the hash table as ordered in array
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned int index = 0;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] == NULL)
		{
			continue;
		}
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
