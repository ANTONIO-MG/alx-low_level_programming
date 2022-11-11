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

	int sum, count;

	sum = 0;

	if (argc > 0)
	{
		for (count = 0; count < argc;)
		{
			sum += atoi(argv[count++]);
		}
			printf("%d\n", sum);

	}
	else if(argc < 0)
	{
		printf("0\n");
	}

	else
	{
		printf("Error\n");

		return (1);
	}

	exit(EXIT_SUCCESS);
}
