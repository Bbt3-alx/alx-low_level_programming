#include <stdio.h>
/**
 * main - that functiion print all digit of base 10 without char variable.
 * Followed a new line.
 * Return: always 0.
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
