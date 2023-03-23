#include "variadic_functions.h"

/**
 * sum_them_all -  function that returns the sum of all its parameters.
 *
 * @n: the number of parameters to be passed.
 *
 * Return: the sum of the paramaters on success or 0 if n is 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list summing_list;
	unsigned int x, y;

	y = 0;

	va_start(summing_list, n);

	if (n == 0)
		return (0);
	else
	{
		for (x = 0; x < n; x++)
		{
			y += va_arg(summing_list, int);
		}

		va_end(summing_list);

		return (y);
	}
}
