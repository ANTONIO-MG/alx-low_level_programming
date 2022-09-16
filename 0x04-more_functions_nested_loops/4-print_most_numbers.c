#include "main.h"

/**
  * print_most_numbers - prints numbers with exceptions
  * num@ holds the vulues to be evaluated
  *
  * return: void, no return
  */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}
		else
		{
		_putchar(num + '0');
		}
	}
	_putchar('\n');
}
