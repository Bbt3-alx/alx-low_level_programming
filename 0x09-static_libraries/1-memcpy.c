#include <stdio.h>

/**
 * _memcpy - This function copies memory area.
 * @dest: This param will receive the n bytes from
 * memory area src.
 * @src: this param is the n bytes to be copied to the dest.
 * @n: The number of bytes to copies.
 * Return: A pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
