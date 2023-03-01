#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - print string
 * @str: String
 * Return: anything.
 */
void puts2(char *str)
{
	int i;

	i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
