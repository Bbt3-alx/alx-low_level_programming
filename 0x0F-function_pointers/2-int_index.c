#include <stdio.h>

/**
 * int_index - function that searches for an integer.
 * @array: The array of integer.
 * @size: size of the array.
 * @cmp: function to cpm 2 element in the array.
 * Return: An integer the index in the array.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
