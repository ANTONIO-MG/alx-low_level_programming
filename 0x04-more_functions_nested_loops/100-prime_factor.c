#include <stdio.h>
#include <math.h>

/**
  * main - Prints the biggerst prime factor of  612852475143
  *
  * Return: void, no return
  */
int main(void)
{
	double square = sqrt(number);
	long x, largefactor;
	long number = 612852475143;

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			largefactor = number / x;
		}
	}

	printf("%ld\n", largefactor);

	return (0);
}
