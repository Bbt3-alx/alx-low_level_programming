#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: The number of argument passed to function
 * Return: An interger
 */
int sum_them_all(const unsigned int n, ...)
{
	int num = 0;
	int total = 0;
	unsigned int i = 0;
	va_list arg_list;

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(arg_list, int);
		total += num;
	}

	return (total);
}
