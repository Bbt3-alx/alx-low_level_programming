#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The size of the memory to allocate.
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{

	void *alloc = malloc(b);
	if (alloc == NULL)
	{
		exit(98);
	}
	return (alloc);
}
