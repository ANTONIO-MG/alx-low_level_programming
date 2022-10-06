#include <stdlib.h>
#include <main.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 *
 * @b: size of memory to be allocated.
 * pointer_to_allocated_memory@: a pointer to the allocated memory
 *
 * Return: a pointer to the allocated memory
 */


void *malloc_checked(unsigned int b)
{

	void *pointer_to_allocated_memory;

	pointer_to_allocated_memory = malloc(b);

	if (pointer_to_allocated_memory == NULL)
		exit(98);

	return (pointer_to_allocated_memory);

}
