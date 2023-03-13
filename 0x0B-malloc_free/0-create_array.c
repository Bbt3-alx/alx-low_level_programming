#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - This function creates an array of chars,
 * and initializes it with a specific char.
 * @size: Size of the array;
 * @c: Character.
 * Return: Array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		if (array == NULL)
		{
			return (NULL);
		}
		array[i] = c;
	}
	return (array);
}
