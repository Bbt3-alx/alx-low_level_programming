#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: Number of element in the array.
 * @size: The size of the array.
 * Return: a pointer to the allocated memory if successful,
 * or NULL if the allocation fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	arr = (void *)calloc(nmemb, size);
	if (arr == NULL)
	{
		return (NULL);
	}
	return (arr);
}

