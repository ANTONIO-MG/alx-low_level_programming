#include "mainn.h"
#include <stdio.h>

int _sqroot(int n, int i);

/**
  * _sqrt_recursion - Returns the natural square root of a number
  * @n: number to calculate the natural square root
  *
  * Return: the natural square root
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}


int _sqroot(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqroot(n, i + 1));
}
