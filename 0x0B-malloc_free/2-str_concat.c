#include "main.h"

/**
 * str_concat - function that concatenates s2 to the end of s1.
 *  in memory, which contains a copy of the string given as a parameter.
 * @s1: the string that will be modified
o * @s2: string to be concatenated to s1
 *
 * Return: NULL if it fails.
 */

char *str_concat(char *s1, char *s2)
{
	int count1 = 0, count2 = 0, total_count = 0;
	char *new;
	int sign_s1 = 0;
	int sign_s2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[count1])
		count1++;
	while (s2[count2])
		count2++;;

	new = malloc((sizeof(char)) * (count1 + count2) + 2);

	if (new == NULL)
		return (NULL);

	count1 = count2 = 0;

	while (s1[count1])
	{
		if (sign_s1 == 1)
			count1++;
		else
			new[total_count++] = s1[count1++];
	}

	while (s2[count2])
	{
		if (sign_s2 == 1)
			count2++;
		else
			new[total_count++] = s2[count2++];
	}

	return (new);

}
