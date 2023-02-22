#include <stdlib.h>
#include <stdio.h>

/**
 *_putchar - print the string '_putchar' to stdout
 *
 * Return: On success 1.
 * On error, -1 i sreturned
 */

void _putchar(char* p[])
{
	int c = strlen(p);
	int i = 0;
	for (i=0; i<=c; i++)
	{
		putchar(p[i]);
	}
}
