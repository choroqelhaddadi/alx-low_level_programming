#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -  free a dog.
 * @d: pointer to a dog struct.
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
