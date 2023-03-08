#include "main.h"

/**
 * _print_rev_recursion - prins out the given arg in reverse.
 * @s: the given string to be printed.
 *
 * Return: no return as is a void function.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
