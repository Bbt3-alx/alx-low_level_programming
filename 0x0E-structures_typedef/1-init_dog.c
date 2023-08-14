#include "dog.h"

/**
 * init_dog - Initialize a structure of type dog.
 * @d: Struct to be initialized
 * @name: member 1.
 * @age: member 2.
 * @owner: member 3.
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d.name = name;
	d.age = age;
	d.owner = owner;
}
