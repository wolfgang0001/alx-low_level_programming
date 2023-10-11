#include "dog.h"
#include <stdio.h>
/**
 * free_dog -  free dog
 * @d: the pointer to the dog
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
