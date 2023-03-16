#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated space
 *  in memory, which contains a copy of the string given as a parameter.
 *
 * @str: the string to be duplicated.
 *
 * Return: NULL if it fails or Returns a pointer to duplicated string.
 */

char *_strdup(char *str)
{
	char  *pointer;
	int count;

	count = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	
	pointer =  (char *)malloc(sizeof(char) * sizeof(*str + 1));
	

	if (pointer == NULL)
	{
		return (NULL);
	}
	else
	{

		while (str[count] != '\0')
		{ 
			pointer[count] = str[count];
			count++;
		}

		return (pointer);

	}
}
