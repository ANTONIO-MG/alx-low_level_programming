#include "function_pointers.h"

/**
 * array_iterator - iterates though an array using a pointer
 * @array: the array to be iterated
 * @size: the size of the array to be iterated.
 * @action: the pointer to the fuction used.
 *
 * Return: no return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int count = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (count < (int)size)
		{
			(*action)(array[count]);
			count++;
		}
	}
}
