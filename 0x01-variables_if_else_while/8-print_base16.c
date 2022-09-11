#include <stdio.h>

/**
  * main - Prints a hexadecimal string
  *
  * Return: Always (Success)
  */
int main(void)
{
	char hexadecimal;

	for (hexadecimal = '0'; hexadecimal <= '9'; hexadecimal++)
	{
		putchar(hexadecimal);
	}

	for (hexadecimal = 'a'; hexadecimal <= 'f'; hexadecimal++)
	{
		putchar(hexadecimal);
	}

	putchar('\n');

	return (0);
}
