#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - This function creates an array of integers.
 * @min: Min
 * @max: Max
 * Return: A pointer.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	
	arr = malloc(sizeof(int) * max);
	if (arr == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < max; i++)
	{
		if (arr[i] < max)
		{
			arr[i] = min;
		}
		arr[i] = max;
	}
	return (arr);
}
