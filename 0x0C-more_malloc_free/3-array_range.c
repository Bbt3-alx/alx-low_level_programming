#include "main.h"
/**
 * array_range - Creates an array of integers.
 * @min: The minimum value.
 * @max: The maximum valu.
 * Return: A pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *range, i;

	if (min > max)
		return (NULL);

	range = malloc((max - min + 1) * sizeof(int));
	if (range == NULL)
		return (NULL);

	for (i = 0; i <= max; i++)
	{
		range[i] = min;
		min++;
	}
	return (range);
}
