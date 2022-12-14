#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - function that initializes a array with a give character
  * @size: the size of the array
  * @c: the initializing character
  *
  * Return: returns NULL if size is 0 and pointer to arrey if not
  */

char *create_array(unsigned int size, char c)
{

	int count;
	char *array;

	array = (char *) malloc(size * sizeof(char));

	if (size < 1)
	{
		return (NULL);
	}

	else
		for (count = 0; count < (int) size; count++)
		{
			array[count] = c;
		}
	return (array);
}

