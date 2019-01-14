#include "hash_tables.h"

/**
 * key_index - entry point
 * @size: size of the array
 * @key: key and value
 * Description: find an index from hashtable by using djb2
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
