#include <stdio.h>

/**
 * int_index - function that searches for an integer.
 * @array: The array of integer.
 * @size: size of the array.
 * @cpm: function to cpm 2 element in the array.
 * Return: An integer the index in the array.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (cmp(array[j]))
			{
				return (i);
			}
			if (!(cmp(array[j] && j)))
			{
				continue;
			}
			else
			return (0);
		}
	}
	return (-1);
}
		
