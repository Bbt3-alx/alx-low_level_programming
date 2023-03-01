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
	int i, len;

	i = 0;
	len = strlen(str);

	for (i = 0; i <= len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
