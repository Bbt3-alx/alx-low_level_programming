#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 *_putchar - print the string '_putchar' to stdout
 *
 * Return: On success 1.
 * On error, -1 i sreturned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
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

	alpha_time = 1;
	while (alpha_time <=10)
	{	
		i = 'a';
		while (i<='z')
		{
			putchar(i);
		i++;
		}

	alpha_time++;
	putchar('\n');
	}
}

int _islower(int c)
{
	if (_islower(c))
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
