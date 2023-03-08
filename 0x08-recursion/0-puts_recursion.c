#include "main.h"

/**
 * _puts_recursion - prins out the given arg string using recursion.
 * @s: the given string to be printed.
 * 
 * Return: no return as is a void function.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\0');

	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
