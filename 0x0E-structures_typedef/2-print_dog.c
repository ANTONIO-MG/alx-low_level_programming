#include <stdio.h>
/*#include <stdlib.h>*/
#include "dog.h"

/**
  * print_dog - prints the information about the dog
  *
  * @d: the dog structure
  *
  * Return: void so nothing is returned
  */

void print_dog(struct dog *d)
{


	if (d->name == NULL)
	{
		printf("(nil)\n");
	}
	else
		printf("Name: %s\n", d->name);
	if (d->age <= 0)
	{
		printf("(nil)\n");
	}
	else
		printf("Age: %5f\n", d->age);
	if (d->owner == NULL)
	{
		printf("(nil)\n");
	}
	else
		printf("Owner: %s\n", d->owner);
}
