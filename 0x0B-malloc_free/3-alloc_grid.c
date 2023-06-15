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
	int j;

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
		d2[i] = malloc(sizeof(height));
		if (d2[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(d2[j]);
			}
			free(d2);
			return (NULL);
		}
	}
	return (d2);
}
