#include "main.h"

/**
 * factorial - print the factorial of a given number
 * @n: The number which factorial is to be printed
 * Return: The factorial of a given number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
