#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - search a string for any of a set of bytes.
 * @s: String.
 * @accept: String to be searched
 * Return: A pointer to the byte in s that matches one of the bytes accept,
 * or NULL if no such byte is foud.
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	a = strpbrk(s, accept);
	if (a != NULL)
	{
		return (a);
	}
	else
	{
		return (NULL);
	}
}
