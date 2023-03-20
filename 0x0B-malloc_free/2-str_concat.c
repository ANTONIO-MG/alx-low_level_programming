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
	int count1, count2, x, y, total_count;
	char *new[] = "A";

	for (count1 = 0; count1 < sizeof(s1); count1++);
	for (count2 = 0; count2 < sizeof(s2); count2++);

	new = malloc(sizeof(char) * (count2 + count2));

	if (new == NULL)
		return (NULL);

	for (total_count = 0, x = 0; x < count1 ; total_count++)
	{
		new[total_count] = s1[x];
		x++;
	}
	for (y = 0; y < count2; total_count++)
	{
		new[total_count] = s2[y];
		y++;
	} 

	return (new);

}
