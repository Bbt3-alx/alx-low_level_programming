#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print the dog struc
 * @d: The structure to be printed.
 * @Return: Nothing.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
printf("Nothing\n");
return;
}

if (d->name == NULL)
printf("(nil)\n");
else
printf("Name: %s\n", d->name);

printf("Age: %.2f\n", d->age);

if (d->owner == NULL)
printf("(nil)\n");
else
printf("Owner: %s\n", d->owner);
}
