#include "main.h"

/**
 * string_nconcat -  concatinates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to be concatinated to s1
 *
 * Return: memory area with s1 and n s2.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int string_count, s1_count, s2_count;

	string_count = s1_count = s2_count = 0;

	new_string = malloc(sizeof(s1) + sizeof(n));

	if (new_string == NULL)
	{
		return (NULL);
	}

	while (s1[s1_count] != '\0')
	{
		new_string[string_count++] = s1[s1_count++];
	}

	while (s2_count <= n)
	{
		new_string[string_count++] = s2[s2_count++];
	}

	return (new_string);
}

