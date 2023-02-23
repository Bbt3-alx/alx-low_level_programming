#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - this program  prints the alphabet, in lowercase
 *
 * Return: It will return 0
 */

void print_alphabet(void)
{
	int alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
}
