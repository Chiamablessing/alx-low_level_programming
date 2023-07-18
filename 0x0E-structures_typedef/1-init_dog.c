#include "dog.h"
/**
 * init_dog - Initialize a dog structure
 * @d: pointer to the dog structure
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: pointer to the owner og the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
