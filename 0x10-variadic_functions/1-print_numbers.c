#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_numbers -  prints numbers, followed by a new line.
 * @separator: This is a separator between numbers
 * @n: is the number of integers passed to the function.
 * Return: 0;
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i = 0, nb;

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
	{
		nb = va_arg(arg_list, int);
		if ( i < n - 1 && separator != NULL)
			printf("%d%s", nb, separator);
		else
			printf("%d", nb);

	}
	printf("\n");

	va_end(arg_list);
}

