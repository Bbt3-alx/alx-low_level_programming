#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array.
 * @array: The array
 * @size: The size of the array
 * @action: A function pointer.
 * Return: Noting.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
