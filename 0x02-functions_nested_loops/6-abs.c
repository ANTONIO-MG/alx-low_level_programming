#include "main.h"

/**
  * _abs - Computes the absolute value of an integer.
  * @num: The number to be computed.
  *
  * Return: Absolute value of number or zero
  */
int _abs(int num)
{
	if (num < 0)
	{
		int abs_val;

		abs_val = num * -1;

		return (abs_val);
	}

	return (num);
}
