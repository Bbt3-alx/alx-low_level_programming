#include <stdio.h>
#include <stdlib.h>

/**
 * Write a program that prints all possible combinations of single-digit numbers.
 * Return: Integers.
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);

		if (number < '9')
		{
			putchar(',');
			putchar(' ');
		}
		
	}
	putchar('\n');
	return (0);
}
