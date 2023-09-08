#include "hash_tables.h"

/**
 * struct hash_table_create - creates a hash table
 * @size: The size of the array to be created
 * Return: the address of the newly allocated space in memory
 */

hash_table_t *hash_table_create(unsigned long int size)
{

        hash_table_t *table = malloc(sizeof(hash_node_t) * size);

        if (NULL == table)
                return (NULL);

        return (table);
}
