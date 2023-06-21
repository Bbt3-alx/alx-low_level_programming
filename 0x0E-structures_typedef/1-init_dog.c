#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize the dog structure.
 * @d: the structure to be initialized
 * @name: The nome of the dog
 * @age: his age
 * @owner: his owner.
 * Return: Notinhg.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
