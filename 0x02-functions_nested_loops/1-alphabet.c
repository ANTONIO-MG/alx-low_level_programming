#include "main.h"


/**
 *printing the alphabet - used simple for loop.
 *
 *Return: void because no return present
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet"\n");
	}

	_putchar('\n');
}
