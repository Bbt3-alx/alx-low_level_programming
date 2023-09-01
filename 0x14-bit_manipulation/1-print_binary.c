#include "main.h"
/**
 * print_binary - print_binary
 * @n: The number to be converted into binary
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	int i, bitCount = sizeof(n) * 8;
	unsigned int mask = 1 << (bitCount - 1);

	if (n == 0)
		_putchar('0');
	else
	{	
		for (i = 0; i < bitCount; i++)
		{
			if (n & mask)
				_putchar('1');
			else
				_putchar('0');
			mask >>= 1;
		}
	}
	_putchar('\n');
}
