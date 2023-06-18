#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - This function creates an array of integers.
 * @min: The minimum number of the array.
 * @max: The maximum number of array.
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int *temp;

	if (min > max)
		return (NULL);

	arr = malloc(min + max * sizeof(int));
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		arr[i] = min;
		temp = realloc(arr, sizeof(int));
		temp[i] = arr[i];
		min = temp[i + 1];
		i++;
	}
	return (temp);
}
