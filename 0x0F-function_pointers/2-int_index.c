#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: The array where to find integers.
 * @size: the size of the array.
 * @cmp: A function pointer, which search for an int in array.
 * Return: The index of the first element for which the cmp does not return 0.
 * Or return -1 if no element maches.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}

	}

	return (-1);
}
