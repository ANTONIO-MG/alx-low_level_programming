#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - free's up allocated space
  * @d: the memory to be freed
  *
  * Return: void, nothing to return
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
