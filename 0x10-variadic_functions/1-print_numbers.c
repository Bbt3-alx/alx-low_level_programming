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
	for (i = 0; i < n; i++)
	{
		int p = va_arg(ap, unsigned int);

		if (separator == NULL || i == 0)
		{
			printf("%d", p);
		}
		else
		{
			printf("%s%d", separator, p);
		}
	}
	printf("\n");
}
