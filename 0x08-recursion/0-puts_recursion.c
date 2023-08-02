#include "main.h"

/**
 * _put_recursion - prints a string, followed by a new line.
 * @s: The string to be printed.
 * Return: Anything.
 */
void _puts_recursion(char *s)
{
	int i = 0;
	
	_putchar(s[i]);
	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	i++;
	_puts_recursion(s + 1);

}
