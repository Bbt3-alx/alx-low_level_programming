#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: always 0.
 */
void print_alphabet_x10(void)
{
	int i, alpha_time;

	alpha_time = 0;

	for (alpha_time = 0; alpha_time < 10; alpha_time++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}

	_putchar('\n');
	}
}

