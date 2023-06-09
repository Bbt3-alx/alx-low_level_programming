#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - That program will check if a given number is digit or not.
 * @c: The numner to be check
 * Return: 0 if c is a digit, 0 otherwose.
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
