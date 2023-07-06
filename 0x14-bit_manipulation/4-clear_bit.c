#include "main.h"

/**
  * clear_bit - Sets bit to a given index
  * @n: The number to be set
  * @index: The index to be executed
  * Return: 1 if it worked, or -1 if an error occurred
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* checks the condition */
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}

	return (-1);
}
