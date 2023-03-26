#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers -  function that prints numbers, followed by a new line.
 *
 * @separator: the element to separate the string
 * @n: the numbers of elements ins the list
 *
 * Return: the sum of the paramaters on success or 0 if n is 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list to_print;
	int x, y;

	va_start(to_print, n);

	for (x = 0; x < (int)n; x++)
	{
		y = va_arg(to_print, int);
		printf("%d", y);
		if (x < ((int)n - 1))
		{
			if (*separator == '\0');

			else
				printf("%s", separator);
		}
	}

	printf("\n");

	va_end(to_print);
}
