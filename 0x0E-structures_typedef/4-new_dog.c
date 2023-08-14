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
	
	dog->name =strdup( name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->age = age;


	dog->owner = strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	return (dog);
}
