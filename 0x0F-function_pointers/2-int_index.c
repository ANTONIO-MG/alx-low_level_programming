#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: the array to be checked
 * @size: the size of the array
 * @cmp: function pointer to execute the search
 *
 * Return: index of the first element for which cmp  does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}

