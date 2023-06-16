#include "main.h"
#include <ctype.h>

/**
 * main - multitpies two numbes together
 * @x: number 1
 * @y: number 2
 * Return: the sum of the two numbers
 */

int main(int argc, char *argv[])
{
	signed long int x = atoi(argv[1]);
	signed long int y = atoi(argv[2]);
	signed long int mult;
	
	if (isdigit((int)y) != 0 || isdigit((int)x) != 0)
	{
			printf("Error\n");
			return (98);
	}

	if (y == 0 || x == 0)
	{
		printf("0\n");
		return (98);
		}

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	mult = x * y;

	printf("%li\n", mult);

	return (0);
}
