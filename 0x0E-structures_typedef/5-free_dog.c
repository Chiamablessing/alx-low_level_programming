#include "dog.h"
/**
 * free_dog - frees a structure data type
 * @d: structure to be freed
 *
 *
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
