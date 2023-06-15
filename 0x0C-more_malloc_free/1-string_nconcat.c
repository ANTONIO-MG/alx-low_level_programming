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
	int count = 0, main = 0;
	int size = strlen(s1) + strlen(s2) + 1;
	char *string;

	if (n >= strlen(s2))
		n = strlen(s2);

	if (*s1 == '\0')
		s1 = "";
	if (*s2 == '\0')
		s2 = "";

	string = malloc(sizeof(string) * size);

	if (string == NULL)
		exit(0);

	while (s1[count])
	{
		string[main] = s1[count];
		count++;
		main++;
	}

	count = 0;

	while (count < (int)n)
	{
		string[main] = s2[count];
		count++;
		main++;
	}
	string[main] = '\0';
	return (string);
}

