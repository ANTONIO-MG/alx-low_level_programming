#include "main.h"


/**
 * array_range - unction that creates an array of integers.
 * @min: starting number.
 * @max: stoping number
 * Return: If min > max, return and NULL If malloc fails
 */

int *array_range(int min, int max)
{
	int *ptr;
	int count = 0;
	int total = max - min;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (total) + sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (count <= max)
	{
		ptr[count] = min;
		min++;
		count++
	}

	return (ptr);
}

