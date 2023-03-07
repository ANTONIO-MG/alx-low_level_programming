#include "main.h"
#include <stdio.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: the string to be examined
 * @n: the character to be checked
 *
 * Return: the remainder of the string occurance of character or null
 */

char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; count < 100; count++)
	{
		if ( s[count] == c)
			break;
	}

	for ( ; count < 100; count++)
	{
		if ( s[count] == '\0')
		{
			return ('\0');
		}
		else
			printf("%c", s[count]);
	}
	return (0);
}
