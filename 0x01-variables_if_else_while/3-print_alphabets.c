#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program start
 * Return: Program end
 */

int main(void)
{
	char lower_al;
	char upper_al;

	for (lower_al = 'a'; lower_al <= 'z'; lower_al++)
	{
		putchar(lower_al);
		upper_al = lower_al;
		putchar(upper_al);
	}
	putchar('\n');
	return (0);
}
