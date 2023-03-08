#include "main.h"

/**
 * root -  returns the reoot of a number
 * @a: number 1
 * @b: number 2
 * Return: returns thenatural root
 */

int root(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	else
		return (root(a, b + 1));
}


/**
 * _sqrt_recursion - returns the natural root of a number.
 * @n: the number to executed
 *
 * Return: returns natural root or -1 if no natural root.
 */

int _sqrt_recursion(int n)
{
	return (root(n, 0));
}

