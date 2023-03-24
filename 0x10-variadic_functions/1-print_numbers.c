#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to the function.
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		int p = va_arg(ap, unsigned int);

		if (separator == NULL)
		{
			printf("%d ", p);
		}
		if (i == n)
		{
			printf("%d ", p);
		}
		else
		{
			printf("%d%s", p, separator);
		}
	}
	printf("\n");
}
