#include "main.h"
/**
 * print_binary - print_binary
 * @n: The number to be converted into binary
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	int i, bitCount = sizeof(n) * 8;
	unsigned long int mask = 1UL << (bitCount - 1);
	int skip = 1;

	if (n == 0)
		_putchar('0');
	else
	{	
		for (i = 0; i < bitCount; i++)
		{
			if (n & mask)
			{
				_putchar('1');
				skip = 0;
			}
			else if (!skip)	
				_putchar('0');

			mask >>= 1;
		}
	}
	_putchar('\n');
}
