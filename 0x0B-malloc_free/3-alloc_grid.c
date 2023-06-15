#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: The width of the array
 * @height:  The height of the array
 * Return: On succes returns a pointer to a 2D array of integers, NULL else.
 */
int **alloc_grid(int width, int height)
{
	int **d2;
	int i;

	i = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	d2 = malloc(sizeof(int *) * width);
	if (d2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		d2[i] = malloc(sizeof(int) * height);
		if (d2 == NULL)
		{
			return (NULL);
		}
	}
	return (d2);
}
