#include "main.c"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: The number which square will be returned.
 * Return: returns the natural square root of a number.
 */
 int _sqrt_recursion(int n)
 {
	int p = 0;

	if (n / p != n)
		 return (-1);
	p = n--;
	return (n * _sqrt_recursion(n - 1));
 }
