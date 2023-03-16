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
	int count, count1;

	count = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (count1 = 0; str[count]; count++)
	{
		count1++;
	}

	pointer =  (char *)malloc(sizeof(char) * (count1 + 1));


	if (pointer == NULL)
	{
		return (NULL);
	}

	for (count = 0; str[count] != '\0'; count++)
	{
		pointer[count] = str[count];

	}
	pointer[count1] = '\0';
	return (pointer);

}
