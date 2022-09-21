#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to be convert
 * min@:
 * b@: the return variable
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int a = 0;
	unsigned int b = 0;
	int c = 1;
	int d = 0;

	while (s[c])
	{
		if (s[a] == 45)
		{
			c *= -1;
		}

		while (s[a] >= 48 && s[a] <= 57)
		{
			b = 1;
			b = (b * 10) + (s[a] - '0');
			c++;
		}

		if (d == 1)
		{
			break;
		}

		a++;
	}

	b *= c;
	return (b);
}
