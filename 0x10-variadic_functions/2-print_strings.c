#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator:  the string to be printed between the strings
 * @n:the number of strings passed to the function
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_list;
	char *ch;

	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		ch = va_arg(arg_list, char *);

		if (ch == NULL)
			printf("(nil)");
		else
			printf("%s", ch);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s%s", separator, ch);
		}
	}
	printf("\n");
	va_end(arg_list);
}
