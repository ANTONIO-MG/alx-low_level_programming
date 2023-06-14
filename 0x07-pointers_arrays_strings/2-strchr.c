#include "main.h"

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
	char *string;

	while (s[count++])
	{
		if (s[count] == c)
		{
			string = &s[count];
			return (string);
		}
	}

	return ('\0');
}
