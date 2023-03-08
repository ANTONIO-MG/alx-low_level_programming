#include "main.h"

/**
 * _strlen_recursion - prins out the given arg string using recursion.
 * @s: the given string to be to be measured
 *
 * Return: returns the lenght of the string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return len;
}
