#include <stdio.h>
/**
 * main - that program will print all the number in base 16.
 * followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char num, hex;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (hex = 'A'; hex <= 'F'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
