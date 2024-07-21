#include <stdio.h>

/**
 * main - Write a program that prints all possible different combinations
 * of three digits.
 * Return: List of integer.
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x <= 7; x++)
	{
		for (y = x; y <= 8; y++)
		{
			for (z = y; z <= 9; z++)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if (x != 7 || y != 8 || z != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
