#include "main.h"

/**
 * _calloc -  function that allocates memory for an array.
 *
 * @nmemb: number of elements
 * @size: number of bytes  per element
 * Return: 0 if nmemb or size is 0, or if _calloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int main_size = (nmemb * size);
	int count = 0;

	if (nmemb == 0 || size == 0)
		exit(0);

	ptr = malloc(main_size);

	if (ptr == NULL)
		exit(0);

	while (count < main_size)
		ptr[count] = 0;

	return (ptr);
}

