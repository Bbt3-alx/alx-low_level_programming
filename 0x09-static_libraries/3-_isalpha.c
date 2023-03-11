#include "main.h"

/**
 * _isalpha - thi function will determine an alpha.
 * @c: String.
 * Return: Always 0.
 */
int _isalpha(int c)
{
	int i;

	for (i = 0; i < strlen(c); i++)
	{
		if (isalpha(c[i]))
		{
			putchar(c[i]);
		}
		printf("%c: is not alpha\n", c[i]);
	}
	return (0);
}
			
