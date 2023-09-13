#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @age: age.
 * @name: name.
 * @owner: owner name.
 * Return: pointer to dog struct.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	if (name == NULL || owner == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	strcdogy(dog->name, name);
	strcdogy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
