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
	void *number = 0;

	number = malloc(sizeof(b));

	if (number == NULL)
	{
		exit(98);
	}

	return (number);
}
