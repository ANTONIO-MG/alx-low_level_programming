#include "main.h"

/**
 * str_concat - function that concatenates s2 to the end of s1.
 *  in memory, which contains a copy of the string given as a parameter.
 * @s1: the string that will be modified
 * @s2: string to be concatenated to s1
 *
 * Return: NULL if it fails.
 */

char *str_concat(char *s1, char *s2)
{
	int count;

	count = 0;

	s1 = (char *)malloc(sizeof(char) * (sizeof(s1) + sizeof(s2)));

	{

		while (count < (int)(sizeof(s2 + 1)))
		{
			s2[sizeof(s1)] = s2[count];
			count++;
		}

		free(s1);
		return (s1);

	}

}
