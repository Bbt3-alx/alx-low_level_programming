#include <stdio.h>
#include <string.h>

/**
 * _strcpy - this function copy a string to another.
 * @dest: String.
 * @src: String.
 * Return: String
 */
char *_strcpy(char *dest, char *src)
{
	char *a = strcpy(dest, src);
	return (a);
}
