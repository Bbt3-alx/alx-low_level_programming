#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - This function returns a pointer to a 2d array of interger
 * @width: The widht of array;
 * @height: The height of array;
 * Return: Pointer to 2d on succes, else NULL;
 */
int **alloc_grid(int width, int height)
{
	int h, w;

	for (h = 0; h < height; h++)
	{
		if (height <= 0)
		{
			return (NULL);
		}
		for (w = 0; w < widht; w++)
		{
			if (widht <= 0)
			{
				return (NULL);
			}

