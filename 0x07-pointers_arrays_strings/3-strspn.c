#include "main.h"

/**
 * _strspn -  function that gets the length of a prefix substring.
 * @s: the string to be checked
 * @accept: the eements to check against
 * Return: the number of bytes in s which are in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int match = 0;
	int count = 0, count2 = 0;

	if (*s == '\0' || *accept == '\0')
		return ('\0');

	while ((int)s[count] != ',')
	{
		count2 = 0;
		while (accept[count2])
		{
			if (s[count] == accept[count2])
			{
				match++;
				count2++;
			}
			count2++;
		}
		count++;
	}

	return (match);
}
