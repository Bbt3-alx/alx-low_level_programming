#include <stdio.h>

/**
 * main - Write a program that prints all possible different combinations
 * of three digits.
 * Return: List of integer.
 */
int main(void)
{
	int x, y, z;
	int fix_y = '1';
	int fix_z = '2';

	for (x = '0'; x < '9'; x++)
	{
		for (y = fix_y; y < '9'; y++)
		{
			for (z = fix_z; z <= '9'; z++)
			{
				if (x != y && y != z && z != x)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					putchar(',');
					putchar(' ');
				}
				else
				{
					continue;
				}
			}
		}
		fix_z++;
		fix_y++;
	}
	putchar('\n');
	return (0);
}
