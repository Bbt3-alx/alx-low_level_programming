#include <stdio.h>
#include <string.h>

/**
 * _strncat - This function that concatenates two strings too.
 *
 * @dest: First String;
 * @src: Second String;
 * @n: Len of second String.
 * Return: String.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		if (dest[i] != '\0')
		{
			dest[dest_len + i] = src[i];
		}
		continue;
	dest[dest_len + i] = '\0';
	}
	return (dest);
}
