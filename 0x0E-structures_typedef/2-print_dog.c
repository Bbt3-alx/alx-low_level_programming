#include "dog.h"

/**
 * print_dog - prints a struct dog.
 * @d: The struct to be printed
 * Return: Anything.
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
