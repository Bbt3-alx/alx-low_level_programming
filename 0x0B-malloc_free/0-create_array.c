#include "main.h"

/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array
 * @c: The specific character to be insert into the array
 * Return: The new allocated ARRAY or NULL if the allocation failled.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size && c != '\0'; i++)
		arr[i] = c;
	return (arr);
}
