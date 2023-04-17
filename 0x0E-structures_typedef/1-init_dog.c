#include "dog.h"
#define NULL (void *)0

/**
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * struct dog - details of dog
 * @d: dog
 * init_dog - initialises dog info
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
