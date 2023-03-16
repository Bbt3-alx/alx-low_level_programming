#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - This function concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * Return: A point to a newly allocated space in memory which contains
 * the contents of s1, followed by the contents of s2, and null terminated.
 */
char *str_concat(char *s1, char *s2)
{
	char *cat = malloc(strlen(s1) + strlen(s2) + 1);
	if (cat == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	strcpy(cat, s1);
	strcat(cat, s2);
	return (cat);
}
