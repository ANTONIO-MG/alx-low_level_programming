#include <stdio.h>

/**
  * main - Prints combination of numbers
  *
  * Return: Always (Success)
  */
int main(void)
{
	int combination, i;

	for (combination = '0'; combination <= '9'; combination++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (combination < i)
			{
				putchar(combination);
				putchar(i);

				if (combination != '8' || (combination == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
