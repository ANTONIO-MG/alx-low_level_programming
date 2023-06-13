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
	int count1, count2, total_count = 0;
	char *new;

	for (count1 = 0; count1 < (int)sizeof(s1); count1++)
	;
	for (count2 = 0; count2 < (int)sizeof(s2); count2++)
	;

	new = malloc((sizeof(char)) * (count1 + count2));

	if (new == NULL)
		return (NULL);

	count1 = count2 = 0;

	while (s1[count1])
	{
		if (s1 == NULL)
		{
			count1++;
		}
		else
		{
			new[total_count++] = s1[count1++];
		}
	}

	while (s2[count2])
	{
		if (s2 == NULL)
		{
			count2++;
		}
		else
		{
			new[total_count++] = s2[count2++];
		}
	}

	return (new);

}
