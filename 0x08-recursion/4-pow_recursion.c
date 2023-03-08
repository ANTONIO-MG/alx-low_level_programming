#include "main.h"

/**
 * _pow_recursion - returns the power of args 1.
 * @x: the base of the exponent
 * @y: the power of teh exponent
 *
 * Return: -1 if y is less than 0, and returns the exponent.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y -  1));
}

