#include "main.h"

/**
  * string_toupper - Changes all lowercase letters to uppercase
  * @p: The string will be modified
  * a@: empty var
  * Return: char var
  */
char *string_toupper(char *p)
{
	int x = 0;

	while (p[x])
	{
		if (p[x] >= 97 && p[x] <= 122)
		{
			p[x] -= 32;
		}

		x++;
	}

	return (p);
}
