#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _calloc - This function allocates memory for an array, using malloc.
 * @nmemb: Number of element in the array;
 * @size: The size of the array.
 * Return: A pointer to the new memory location.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
