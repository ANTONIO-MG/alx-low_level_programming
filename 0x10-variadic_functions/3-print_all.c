#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/**
 * print_all -  function that prints strings, followed by a new line.
 *
 * @format: the keyword format that represents different data types.
 *
 * Return: nuthing, it is void.
 */

void print_all(const char *const format, ...)
{
	va_list to_print;
	int count = 0;

	va_start(to_print, *format);

	while (format[count] != '\0')
	{
		switch (format[count])
		{
			case 'c':
				printf("%c", va_arg(to_print, int));
				switch (count < (int)strlen(format) - 1)
				{
					case 1:
						printf(", ");
						break;
					default:
						break;
				}
				break;

			case 'i':
				printf("%d", va_arg(to_print, int));
				switch (count < (int)strlen(format) - 1)
				{
					case 1:
						printf(", ");
						break;
					default:
						break;
				}
				break;

			case 'f':
				printf("%f", va_arg(to_print, double));
				switch (count < (int)strlen(format) - 1)
				{
					case 1:
						printf(", ");
						break;
					default:
						break;
				}
				break;

			case 's':
				if (format[count] == '\0')
				{
					printf("(nil)");
					switch (count < (int)strlen(format) - 1)
					{
						case 1:
							printf(", ");
							break;
						default:
							break;
					}
					break;
				}

				else
				{
					printf("%s", va_arg(to_print, char *));
					switch (count < (int)strlen(format) - 1)
					{
						case 1:
							printf(", ");
							break;
						default:
							break;
					}
					break;
				}

			default:
				break;
		}

		count++;
	}

	printf("\n");

	va_end(to_print);
}
