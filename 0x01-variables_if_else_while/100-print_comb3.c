#include <stdio.h>

/**
 * main - This program prints all possible different combinations of two digits
 * Return: List of integer.
 */
int main(void)
{
	int i, number;

	for (i = '0'; i < '9'; i++)
	{
		for (number = '1'; number <= '9'; number++)
		{
			if (i != number)
			{
				putchar(i);
				putchar(number);
				if (!(i == '8' && number == '9'))
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
	}
	putchar('\n');
	return (0);
}
