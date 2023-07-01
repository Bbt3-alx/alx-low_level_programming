#include <stdio.h>
#include <stdlib.h>

/**
 * helper - will track the currfnt sqrt oc n.
 * @n: The number which square is to find
 * @sqrt:The current sqrt of n.
 * Return: The natural square of n
 */
int helper(int n, int sqrt)
{
	if (sqrt * sqrt == n)
	{
		return (sqrt);
	}
	else if (sqrt * sqrt > n)
	{
		return (-1);
	}
	else
	{
		return (helper(n, sqrt + 1));
	}
}
/**
 * _sqrt_recursion - This function returns the natural square root of a number.
 * @n: The square root of the number to be returned.
 * Return: the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helper(n, 0));
}
