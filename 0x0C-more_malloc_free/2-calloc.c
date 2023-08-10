#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: Number of element in the array.
 * @size: The size of the array.
 * Return: The address f the new allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size <= 0)
		return (NULL);
	arr = calloc(nmemb, size);
	if (arr == NULL)
		return (NULL);

	return (arr);
}
