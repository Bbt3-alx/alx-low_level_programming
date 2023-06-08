#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen_recursion - This function returns the length of a string.
 * @s: The lenght of the string to bereturned.
 * Return: An integer.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		_strlen_recursion(s + 1);
		len = len + 1;
	}
	return (len);
}
