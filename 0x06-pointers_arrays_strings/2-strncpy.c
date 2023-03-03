#include <stdio.h>
#include <string.h>

/**
 * _strncpy - copies a string.
 * @dest: string1
 * @src: string to copie
 * @n: number of bytes
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
