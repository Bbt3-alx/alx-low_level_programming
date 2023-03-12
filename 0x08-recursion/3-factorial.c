#include <stdio.h>

/**
 * factorial - function that returns the factorial of a given number.
 * @n: Number.
 * Return: An int.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}