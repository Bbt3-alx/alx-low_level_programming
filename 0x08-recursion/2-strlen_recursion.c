#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: The string which string is to be returned.
 * Return: The lenght of the string (s).
 */
int _strlen_recursion(char *s)
{
	int len = 0, i = 0;
	
	if (s[i] == '\0')
		return (0);

	len++;
	return (len + _strlen_recursion(s + 1));

}
