#include "main.h"

/**
 * swap_int - That function will swap two integer.
 * @a: First integer
 * @b: Second integer
 * Return: Anything.
 */
void swap_int(int *a, int *b)
{
	int bb;

	bb = *a;
	*a = *b;
	*b = bb;
}
