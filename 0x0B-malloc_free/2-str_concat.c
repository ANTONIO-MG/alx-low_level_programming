#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - function that initializes a array with a give character 
  * @str: the string to be coppied
  *
  * Return: returns NULL if size is 0 and pointer to arrey if not
  */

char *_strdup(char *str)
{
	int count;
	char *new_str;

	new_str = (char *) malloc((int) str * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	else
		for (count = 0; count < str[count]; count++)
		{
			new_str[count] = str[count];
		}
        
	return (new_str);
}

