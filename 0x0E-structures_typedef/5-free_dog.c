#include "dog.h"

/**
 * free_dog - frees struct dog
 * @d: pointer to struct dog
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
