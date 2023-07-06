#include "main.h"

/**
  * set_bit - sets the value of a bit by given index
  * @n: The number to be executed
  * @index: The index to be changed
  * Return: 1 if it worked, or -1 if an error occurred
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* chack teh conditions */

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((*n |= 1 << index) ? 1 : -1);
}
