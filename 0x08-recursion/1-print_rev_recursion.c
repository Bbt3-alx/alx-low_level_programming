#include <stdio.h>

/**
 * _print_rev_recursion This function print a string in reverse.
 * @s: String to be reversed
 * Return: Anything.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
