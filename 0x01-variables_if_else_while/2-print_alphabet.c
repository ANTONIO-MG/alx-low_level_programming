#include <stdio.h>

/**
 * main - Prints the alphabetic
 *
 * Return: Always (Success)
 */
int main(void)
{
	char alphaB;

	for (alphaB = 'a'; alphaB <= 'z'; alphaB++)
		putchar(alphaB);

	putchar('\n');
	return (0);
}
