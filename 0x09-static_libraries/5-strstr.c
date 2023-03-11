#include <stdio.h>
#include <string.h>

/**
 * _strstr - This function locates a substring.
 * @haystack: This param is the String in which we will locate the substring.
 * @needle: This param is the substring to be located.
 * Return: A pointer to the begiining of the located substring, or NULL else.
 */
char *_strstr(char *haystack, char *needle)
{
	char *str;

	str = strstr(haystack, needle);
	return (str);
}
