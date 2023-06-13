#include "main.h"

/**
 * str_concat - function that concatenates s2 to the end of s1.
 * @s1: the string that will be modified
 * @s2: string to be concatenated to s1
 * Return: NULL if it fails.
 */

char *str_concat(char *s1, char *s2)
{
	int count1 = 0, count2 = 0, total = 0, sign_s1 = 0, sign_s2 = 0;
	char *new;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[count1])
		count1++;
	while (s2[count2])
		count2++;

	new = malloc((sizeof(char)) * (count1 + count2));

	if (new == NULL)
		return (NULL);

	count1 = count2 = 0;

	while (s1[count1])
	{
		if (sign_s1 == 1)
			count1++;
		else
			new[total++] = s1[count1++];
	}

	while (s2[count2])
	{
		if (sign_s2 == 1)
			count2++;
		else
			new[total++] = s2[count2++];
	}

	return (new);
}
