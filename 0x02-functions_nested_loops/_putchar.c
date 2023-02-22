#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *_putchar - print the string '_putchar' to stdout
 *
 * Return: On success 1.
 * On error, -1 i sreturned
 */

void _putchar(char p[])
{
	int i;
	int strp = strlen(p);
	for (i=0; i<=strp; i++)
	{
		putchar(p[i]);
	}
}

void print_alphabet(void)
{
	int i;
	for (i='a'; i<='z'; i++)
	{
		putchar(i);
	}

}

void print_alphabet_x10(void)
{
	int i, alpha_time;

	alpha_time = 0;
	while (alpha_time <=10)
	{	
		i = 'a';
		while (i<='z')
		{
			putchar(i);
		i++;
		}

	alpha_time++;
	}
}
