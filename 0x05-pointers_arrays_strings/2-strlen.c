#include <stdio.h>
#include <string.h>

/**
 * _strlen - that function return the lenght of a string.
 * @s: The len of the string to be returned.
 * Return: len.
 */
int _strlen(char *s)
{
	int l;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
