#include "main.h"

/**
 * is_perfect_square - helper function to check if x is a perfect square of n
 * @n: The number for wich to verify the square root.
 * @x: The power of n
 * Return: The natural square root or -1 it not found.
 */
int is_perfect_square(int x, int n)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (is_perfect_square(x + 1, n));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to find the square root.
 * Return: The integer natural square root or -1 if not found.
 */
int _sqrt_recursion(int n)
{
/* Check for negative or zero input */
if (n <= 0)
return (-1);
/* Call the helper function with initial value of 1 */
return (is_perfect_square(1, n));
}
