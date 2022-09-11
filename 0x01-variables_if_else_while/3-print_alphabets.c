#include <stdio.h>

/**
 * main - Prints the alphabetic in lower and upper case
 *
 * Return: Always (Success)
 */
int main(void)
{
	char alphaB;

	for (alphaB = 'a'; alphaB <= 'z'; alphaB++)
	{
		putchar(alphaB);
	}

	for (alphaB = 'A'; alphaB <= 'Z'; alphaB++)
	{
		putchar(alphaB);
	}

	putchar('\n');

	return (0);
}
