#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free allocated dog memory.
 * @d: pointer to struct.
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
