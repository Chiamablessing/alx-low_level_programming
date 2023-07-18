#include "dog.h"
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: pointer to member name of the dog
 * @age: pointer to the member age of the dog
 * @owner: pointer to the member owner of the dog
 * Return: returns a pointer address and NULL on failure
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL || name == NULL || age <= 0 || owner == NULL)
		return (NULL);
	dog->age = age;

	dog->name = malloc(strlen(name) + 1);
	if (dog->name == NULL)
		return (NULL);

	dog->owner = malloc(strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		return (NULL);
	}

	strcpy(dog->name, name);
	strcpy(dog->owner, owner);

	return (dog);
}
