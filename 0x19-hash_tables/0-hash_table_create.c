#include "hash_tables.h"

/**
 *hash_table_create - entry point, create new hash table
 *@size: size of the hash table or size of the array
 *
 *Description: create new hash table
 *Return: pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = NULL;
	hash_node_t **new_array = NULL;

	if (size == 0)
		return (NULL);

	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
		return (NULL);

	new_array = calloc(size, sizeof(char *));

	if (new_array == NULL)
	{
		free(new_array);
		return (NULL);
	}

	new_hash_table->size = size;
	new_hash_table->array = new_array;
	return (new_hash_table);
}
