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
	while (argc--)
	{
		printf("%s\n", *argv++);

	}

	exit(EXIT_SUCCESS);
}
