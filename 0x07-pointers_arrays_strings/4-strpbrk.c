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
	int i, size;

	size = strlen(s);

	for (i = 0; i <= size; i++)
	{
		if (s[i] == accept[i])
		{
			return (s);
		}
		continue;
	}
	return (NULL);
}
