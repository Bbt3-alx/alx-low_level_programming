#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: Data formater.
 * @...: Optional argument.
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{       
        va_list print;
	int i;
	
	va_start(print, format);
        while (i < format)
	{
		if ((print[i] == 'i') || (print[i] == 'c'))
		{
			int p = va_arg(print, int);
		}
		if (print[i] == 's')
		{
			char *ch = va_arg(print, char *);
		}
		double dd = (float) va_arg(print, double);
		i++
	}
	printf("\n");
	va_end(print);
}
