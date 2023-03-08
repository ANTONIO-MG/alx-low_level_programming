#include "main.h"

/**
 * prime -  checks if a number is prime
 * @a: base number
 * @b: exponent
 *
 * Return: 0 if it it's not a prime and 1 if it is.
 */

int prime(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
		return (0);
	else if (a == b)
		return (1);
	return (prime(a, b + 1));
}

/**
 * is_prime_number - determines if a numer is a prime or not
 * @n: the number to executed
 *
 * Return: 1 if its a prime and 0 if not.
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}

