#include "dog.h"
#include <stdlib.h>

/**
 * init_dog -  function that initialize a variable of type struct dog.
 * @name: the name of the dog in char.
 * @age: the age of the dog in float.
 * @owner: the owner of the dog.
 * @d: the struct with the information.
 *
 * Return: no return as this function is void.
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
