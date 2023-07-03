nclude "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * .
 * @array: The array.
 * @size: the array size.
 * @cmp: comparr.
 * Return: a pointer.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
for (i = 0; i < size; i++)
{
	if (cmp(array[i]) != 0)
		return (i);
}
return (-1);
}
