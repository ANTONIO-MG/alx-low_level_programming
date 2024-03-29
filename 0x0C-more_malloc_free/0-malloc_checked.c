#include "main.h"

/**
 * malloc_checked -  function that allocates memory using malloc.
 *
 * @b: data to be stored in the memory allocated area.
 *
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
