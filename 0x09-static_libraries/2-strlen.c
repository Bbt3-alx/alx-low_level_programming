#include <stdio.h>
#include <string.h>

/**
 * _strlen - that function return the lenght of a string.
 * @s: The len of the string to be returned.
 * Return: len.
 */
int _strlen(char *s)
{
	int len, i;

	len = 0;
	i = 0;

	while (s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}
