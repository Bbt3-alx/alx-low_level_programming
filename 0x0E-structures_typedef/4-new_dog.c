#include "dog.h"

/**
 * new_dog - This function create a new dog.
 * @name: Member 1.
 * @age: Member 2.
 * @owner: Member 3.
 * Return: a pointer to the newly dog created, or NULL if FAILLED.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
