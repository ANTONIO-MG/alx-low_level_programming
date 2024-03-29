#ifndef _DOG_
#define _DOG_

/**
 * struct dog - the structure holding different properties
 * @name: the name of the dog.
 * @age: the age ogf of the dog.
 * @owner: the owner of teh dog.
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_STRUCT */
