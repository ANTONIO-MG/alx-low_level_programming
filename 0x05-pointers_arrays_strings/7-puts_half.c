#include "main.h"

/**
  * puts_half - Prints half of a string
  * @str: The string to print
  * full@: variable holding the entire list
  * half@: variable holding the half list
  * Return: void
  */
void puts_half(char *str)
{
	int full = 0;
	int half;

	while (str[full] != '\0')
	{
		full++;
	}

	if (full % 2 == 1)
	{
		half = (full - 1) / 2;
		half += 1;
	}
	else
	{
		half = full / 2;
	}

	for (; half < full; half++)
	{
		_putchar(str[half]);
	}

	_putchar('\n');
}
