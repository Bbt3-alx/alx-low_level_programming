#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - that function prints a string, in reverse,
 * followed by a new line.
 * @s: String
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
