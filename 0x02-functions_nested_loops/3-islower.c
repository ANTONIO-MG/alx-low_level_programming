#include "main.h"

/**
  * _islower - Checks for lowercase character
  * @check: The character to be checked
  *
  * Return: 1 for lowercase character or 0 for anything else
  */
int _islower(int check)
{
	if (check >= 97 && check <= 122)
	{
		return (1);
	}

	return (0);
}
