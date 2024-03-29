#include "hash_tables.h"

/**
 * hash_djb2 - hash function to index strings
 * @str: the string to indexed
 * Return: the index to be hashed
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
