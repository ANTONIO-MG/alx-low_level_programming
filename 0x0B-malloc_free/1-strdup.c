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

	pointer =  (char *)malloc(sizeof(char) * sizeof(*str));


	if (pointer == NULL)
	{
		return (NULL);
	}

	while (str[count] != '\0')
	{
		pointer[count] = str[count];
		count++;
	}
	pointer[count] = '\0';
	return (pointer);

}
