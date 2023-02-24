#include <stdio.h>

/**
 * main - print the alphabet in lowercase
 *
 * Return: 0.
 */

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{

		if ((alp != 'q') && (alp != 'e'))
		{
			putchar(alp);
		}
		else
		{
			continue;
		}
	}
	putchar('\n');
	return (0);
}
