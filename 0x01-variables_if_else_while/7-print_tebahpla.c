#include <stdio.h>
/**
 * main - that program print lowercase alphabet in reverse.
 * Followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
