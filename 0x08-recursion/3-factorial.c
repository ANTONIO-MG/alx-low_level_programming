#include "main.h"

/* factorial - returns the factorial of a given number
 * @n: the number to executed
 *
 * return: 1 if number is 0 and -1 if number is less than 0
 */

int factorial(int n)
{
	if ( n == 0)
		return (1);
	else if ( n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}

