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
	int count = 0;
	int num = 0;

	if ((int)size <= 0)
		return (-1);

	while (count < (int)size)
	{
		num = (*cmp)(array[count]);

		if (num != 0)
		{
			return (count);
		}
		count++;
	}

	return (-1);
}
