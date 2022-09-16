#include "main.h"

/**
  * print_diagonal - Drawing a diagonal line
  * @numLines: The number of lines to be printed
  * x@: x paramemter of line
  * y@: y parameter of line
  * Return: void, no return
  */
void print_diagonal(int numLines)
{
	int x, y;

	if (numLines <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < numLines; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}

			_putchar(92);
			_putchar('\n');
		}
	}
}
