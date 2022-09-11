#include <stdio.h>

/**
  * main - Prints some letters of alphabet
  *
  * Return: Always (Success)
  */
int main(void)
{
	char someL;

	for (someL = 'a'; someL <= 'z'; someL++)
	{
		if (someL != 'e' && someL != 'q')
		{
			putchar(someL);
		}
	}

	putchar('\n');

	return (0);
}
