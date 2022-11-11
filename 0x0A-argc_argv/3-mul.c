#include <stdio.h>
#include <stdlib.h>

/**
  * main - takes commandline arguments c and v
  * description: this projects prints the first argument on STDOUT
  * @argc: number of arguments  given
  * @argv: arguments  given
  *
  * Return: returns 0 on sucees and error on failure
  */

int main(int argc, char **argv)
{

	int x, y, count;

	if (argc > 2)
	{
		for (count = 1; count < argc && count < 2; count++)
		{
			x = atoi(argv[count]);
		}
		for (count = 2; count < argc && count < 3; count++)
		{
			y = atoi(argv[count]);
		}

		printf("%d\n", (x * y));
	}

	else
	{
		printf("Error");
	}

	exit(EXIT_SUCCESS);
}
