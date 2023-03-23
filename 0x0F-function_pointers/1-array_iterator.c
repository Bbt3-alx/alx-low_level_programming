#include <stdio.h>

/**
 * array_iterator - This function executes a function
 * given as a parameter on each element of an array.
 * @array: List of element.
 * @size: The size of the array.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
