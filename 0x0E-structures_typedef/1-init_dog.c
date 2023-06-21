#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize the dog structure.
 * @d: the structure to be initialized
 * @name: The name of the dog
 * @age: The dog age
 * @owner: his owner.
 * Return: Notinhg.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(strlen(name) + 1);
	if (d->name != NULL)
		strcpy(d->name, name);
	d->age = age;

	d->owner = malloc(strlen(owner) + 1);
	if (d->owner != NULL)
		strcpy(d->owner, owner);
}
