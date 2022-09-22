#include "main.h"

/**
  * _strncpy - Copy a string
  * @dest: The destination value
  * @src: The source value
  * @n: The copy limit
  * x@: holding variable
  * y@: holding variable
  *
  * Return: char value
  */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (src[y])
	{
		b++;
	}

	while (x < n && src[x])
	{
		dest[x] = src[x];
		a++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
