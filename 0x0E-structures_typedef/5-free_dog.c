#include "dog.h"

/**
 * free_dog - This function free a dog.
 * @d: The dog to be free'd
 * Return: Anything.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
