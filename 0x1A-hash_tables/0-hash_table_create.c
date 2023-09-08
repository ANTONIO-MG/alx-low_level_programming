#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: The size of the array to be created
 * Return: the address of the newly allocated space in memory
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **node = NULL;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	node = malloc(sizeof(hash_node_t *) * size);

	if (node == NULL)
		return (NULL);

	table->size = size;
	table->array = node;

	return (table);
}
