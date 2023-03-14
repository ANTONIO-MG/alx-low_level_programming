#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it.
 * @size: the size of the array to be created.
 * @c: the character to be filled in teh array.
 *
 * Return: NULL if it fails or size = 0, else Returns a pointer.
 */

char *create_array(unsigned int size, char c)
{
	char  *pointer;
	unsigned int count;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{

		pointer = (char *)malloc(sizeof(char) * size);

		for (count = 0; count < size; count++)
		{
			pointer[count] = c;
		}

		if (*(pointer + 0) == '\0')
		{
			return (pointer);
		}
		else
		{
			return (pointer);
		}
	}

}
