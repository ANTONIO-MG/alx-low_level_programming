#include "main.h"
#include <stdio.h>

/**
  * init_dog - initiallizes the dog struct
  *
  * @d: struct pointer with doc specifications
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  *
  * Return: its void so returns nothing.
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
