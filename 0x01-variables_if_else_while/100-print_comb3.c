#include <stdio.h>

/**
 * main - This program prints all possible different combinations of two digits
 * Return: List of integer.
 */
int main(void)
{
	int i, j;
	int fix = '1';

	for (i = '0'; i < '9'; i++)
	{
		for (j = fix; j <= '9'; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				if (!(i == '8' && j == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			else
			{
				continue;
			}
		}

		fix++;
	}
	putchar('\n');
	return (0);
}
