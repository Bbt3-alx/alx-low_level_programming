#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: The string to be printed.
 * Return: Anything.
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	i++;
	_puts_recursion(s + 1);

}
