#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: The element to be resized with realloc.
 * @old_size: The preview size of ptr.
 * @new_size: The new_size.
 * Return: A pointer to the new_resized memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	ptr = realloc(ptr, new_size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
