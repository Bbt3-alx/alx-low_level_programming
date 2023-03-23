#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - This function  returns the sum of all its parameters.
 * @n: Argument that count the number of argument.
 * @...: Means that the function accept variadic argument.
 * Return: The sum of argument.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
