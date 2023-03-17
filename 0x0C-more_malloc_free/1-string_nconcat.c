#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - This function concatenate two strings
 * @s1: The first string
 * @s2: The second string
 * Return: A char pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_cat;
	int s1len, s2len, count;

	s1len = strlen(s1);
	s2len = strnlen(s2, n);
	count = s1len + s2len;
	str_cat = malloc(count);
	if (str_cat == NULL)
	{
		printf("Impossible to allocate memory");
		return (NULL);
	}
	strcpy(str_cat, s1);
	strncat(str_cat, s2, n);
	return (str_cat);
}
