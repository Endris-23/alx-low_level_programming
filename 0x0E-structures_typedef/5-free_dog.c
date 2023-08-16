#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free yo  dogs
 * @d: yo dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
