#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that returns maching characters
 * @s: the string to be examined
 * @c: the character to be checked
 *
 * Return: the remainder of the string if matched or null.
 */

char *_strchr(char *s, char c)
{
	int count = 0;

	while (s[count] != '\0')
	{
		if (s[count] == c)
			break;
		else
			count++;
	}

	if (s[count] == c)
	{
		while (s[count] != '\0')
		{
			putchar(s[count]);
			count++;
		}
	}
	else
		return ('\0');
	return (0);
}
