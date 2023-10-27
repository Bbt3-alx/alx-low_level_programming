#include "main.h"
/**
 * get_pow - get the power of the number
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of the base rising to the power
 *
 */
unsigned long int get_pow(unsigned int base, unsigned int power)
{
	unsigned long int nb;
	unsigned int i;

	nb = 1;
	for (i = 1; i <= power; i++)
		nb *= base;
	return (nb);
}

/**
 * print_binary - print a binary repesentation of a number
 * @n: The number to be printed in binary mode
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = get_pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
