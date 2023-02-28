#include <stdio.h>
#include <string.h>

/**
 * print_rev - that function prints a string, in reverse,
 * followed by a new line.
 * @s: String
 */
void print_rev(char *s)
{
	int lon = 0;

	int o;

	while (*s != '\n')
	{
		lon++;
		s++;
	}
	s--;
	for (o = lon; o > 0; o--)
	{
		putchar(*s);
		s++;
	}
	putchar('\n');
}
