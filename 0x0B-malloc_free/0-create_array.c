#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array;
 * @c: Caracteries to be printed in the array.
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size <= 0)
	{
		return (NULL);
	}

	array = malloc(size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
