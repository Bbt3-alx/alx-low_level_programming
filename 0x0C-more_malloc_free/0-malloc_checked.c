#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Thi function allocates memory using malloc.
 * @b: This param is the number of element.
 * Return: Anything.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = (void *) malloc(b);
	if (a == NULL)
	{
		exit(98);

	}
	return (a);
}
