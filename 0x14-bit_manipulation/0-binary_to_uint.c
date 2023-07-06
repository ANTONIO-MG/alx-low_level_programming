#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointing to binary string
 * Return: converted number, 0 if there's chars in the string or b = NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int sum = 0, len = 0, count = 0;
	int array[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

	if (*b == '\0')
		return (0);

	while (b[len] != '\0')
	{
		len++;
	}

	while (len--)
	{

		if (b[len] != 48 && b[len] != 49)
			return (0);

		if (b[len] == '1')
		{
			sum += array[count];
		}
		count++;
	}

	return (sum);
}
