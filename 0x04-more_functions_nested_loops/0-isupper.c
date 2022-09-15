#include "myHeader.h"

/**
 * _isupper - checks for uppercase character
 *
 * @letter: the alphabetic letter to be checked
 *
 * return - int 1 for for upper letter and 0 for lower letter
 */

int _isupper(int letter)
{
	if (letter <= 'A' && letter <= 'Z');
	{	
		return (1);
	}

	return (0);
}
