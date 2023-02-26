#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - will check if upper or not
 * Return: 1 is c is upper, 0 else
 */

int _isupper(int c)
{
	int ch;
	ch = isupper(c);
	if (ch)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
