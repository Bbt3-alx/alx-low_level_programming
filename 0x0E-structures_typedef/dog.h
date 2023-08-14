#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - is a structure of 3 memers.
 * @name:member 1.
 * @age: member 2.
 * @owner: member 3.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif /* MAIN_H */
