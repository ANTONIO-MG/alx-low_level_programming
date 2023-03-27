#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings -  function that prints strings, followed by a new line.
 *
 * @separator: the element to separate the string
 * @n: the numbers of elements ins the list
 *
 * Return: the sum of the paramaters on success or 0 if n is 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list to_print;
	int x;
	char *y;

	va_start(to_print, n);

	for (x = 0; x < (int)n; x++)
	{
		y = va_arg(to_print, char *);

		if (y == NULL)
		{
			printf("nil");
		}

		else
			printf("%s", y);

		if (separator == NULL)
		{
		}

		else
		{
			if (x < ((int)n - 1))
				printf("%s", separator);
		}
	}

	printf("\n");

	va_end(to_print);
}
