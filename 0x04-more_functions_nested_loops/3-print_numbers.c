#include <stdio.h>

/**
 * print_mumbers - That program print from 0 to 9.
 * @c: digit
 * Return: 0.
 */
void print_numbers(int c)
{
	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
