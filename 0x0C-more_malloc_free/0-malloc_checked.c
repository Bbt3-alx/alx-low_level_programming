#include "main.h"

/**
 * malloc_checked - This function that allocates memory using malloc.
 * @b: The size of memory to be allocated.
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *alloc;

	alloc = malloc(b);
	if (alloc == NULL)
	{
		exit(98);
	}
	return (alloc);
}
