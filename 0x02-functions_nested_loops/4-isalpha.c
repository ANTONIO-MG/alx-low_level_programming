#include "main.h"

/**
  * _isalpha - Checks for alphabetic character
  * @check: The character to be checked
  *
  * Return: 1 for alphabetic character or 0 for anything else
  */
int _isalpha(int check)
{
	if ((check >= 65 && check <= 90) || (check >= 97 && check <= 122))
	{
		return (1);
	}

	return (0);
}
