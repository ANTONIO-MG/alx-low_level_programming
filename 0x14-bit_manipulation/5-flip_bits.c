#include "main.h"

/**
  * flip_bits - tells you the number of bit needed to flip
  * @n: number of bits
  * @m: change required
  * Return: count of bits
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int marking = 0, count = 0;

	marking = n ^ m;

	while (marking)
	{
		if (marking & 1)
			count++;

		marking >>= 1;
	}

	return (count);
}
