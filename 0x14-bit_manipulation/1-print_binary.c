#include "main.h"

/**
 * print_binary - converts from into to binary
 * @n: The number to be represented
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	_div(n);
}

/**
 * _div - devides teh number given
 * @n: number to be devided
 *
 * Return: void
 */

void _div(unsigned long int n)
{
	if (n < 1)
		return;

	_div(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
