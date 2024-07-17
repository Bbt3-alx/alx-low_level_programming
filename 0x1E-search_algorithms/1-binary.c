#include "search_algos.h"

/**
 * binary_search -  searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:the value to search for
 * Return: the index where value is located or -1
 * If value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int i, left, right, mid;

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");

		mid = (left + right) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid -1;
		}
		i++;
	}
	return (-1);
}
