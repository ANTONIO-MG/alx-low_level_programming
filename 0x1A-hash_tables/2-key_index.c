#include "hash_tables.h"

/**
 * key_index - check the code
 * @key: the key to be hashed
 * @size: teh size of the array
 * Return: returns the index to be hashed
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int x = hash_djb2(key);

	x = x % size;

	return (x);
}
