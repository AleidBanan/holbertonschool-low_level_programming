#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory of a dog
 * @d: pointer to dog to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
