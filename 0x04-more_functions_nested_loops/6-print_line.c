#include "main.h"

/**
  * print_line - Draws a straight line from given numbers
  * @num: The number of lines to draw
  * x@: placeholder
  * Return: void, no return
  */
void print_line(int num)
{
	int x;

	if (num <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < num; x++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
