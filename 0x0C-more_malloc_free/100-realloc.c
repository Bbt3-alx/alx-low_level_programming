#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: is a pointer to the memory previously allocated with a call to malloc
 * @old_size:  is the size, in bytes, of the allocated space for ptr.
 * @new_size: The new_size, in bytes of the new memory block.
 * Return: A pointer to the new_resized memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
	}
	else if (new_size <= old_size)
		return (ptr);

	new_ptr = realloc(ptr, new_size);
	if (new_ptr == NULL)
		return (NULL);

	return (new_ptr);
}
