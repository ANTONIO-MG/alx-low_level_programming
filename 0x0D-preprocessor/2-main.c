#include "main.h"

/**
 * main - prints the name of the file it was compiled from.
 *
 * Return: returns 0 on success.
 */

int main(void)
{
	char *string;
	int count = 0;

	string = __FILE__;

	while (string[count] != '\0')
	{
		printf("%c", string[count]);
		count++;
	}
	printf("\n");

	return (0);
}
