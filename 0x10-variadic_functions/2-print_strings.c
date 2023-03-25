#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: separator.
 * @n: number of argument
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		char *p = va_arg(ap, char *);

		printf("%s", p);
		if ((p != NULL) && (separator != NULL))
		{
			printf("%s%s", separator, p);
		}
	}
	printf("\n");
	va_end(ap);
}
