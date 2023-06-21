#include "3-calc.h"

/**
 * op_add - sums two numbers
 * @a: first number
 * @b: second number
 * Return: addition of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtration of  two numbers
 * @a: first number
 * @b: second number
 * Return: total  of a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: product of  a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of  two numbers
 * @a: first number
 * @b: second number
 * Return: division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of a number
 * @a: first number
 * @b: second number
 * Return: remainder of a from %b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
