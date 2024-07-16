#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integer using the
 * Linear search algorithm
 * @array: Apointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: The first index where value is located or -1 if value is not prsent
 * in array or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		write(1, "Value checked array [", 21);
		write(1, &i, 1);
		write(1, "]\n", 2);
		if (array[i] == value)
		{
			printf("\n");
			return (i);
		}
	}
	return (-1);
}
