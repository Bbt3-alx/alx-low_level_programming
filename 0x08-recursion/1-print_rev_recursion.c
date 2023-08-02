#include "main.h"

/**
 * _print_rev_recursion -  prints a string in reverse.
 * @s: The string to be printed in reverse.
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s == NULL)
		return;

	if (s[i] == '\0')
		return;

	i++;
	_print_rev_recursion(s + 1);
	_putchar(s[i]);

	if (s[i - 1] == '\0')
		_putchar('\n');
}
