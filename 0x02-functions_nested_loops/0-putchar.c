#include "main.h"

/**
* main - executes the _putchar function
* loop1@: counts the letters in the loop
* str_size@: size of string for iteration
* y@: string to be printed
* return: 0
*/

int main(void)
{
	int loop1;
	int str_size;
	char y[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	str_size = sizeof(y);
	for (loop1 = 0; loop1 < str_size; loop1++)
	{
		putchar(y[loop1]);
	}

	return (0);
}
