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
	size_t len;
	unsigned int i;

	/* Allocate the required memory space for concatenation. */
	str_cat = malloc(strlen(s1) + n +1);
	/* Verify if the allocation is done. */
	if (str_cat == NULL)
	{
		printf("Impossible to allocate memory");
		return (NULL);
	}
	strcpy(str_cat, s1);
	len = strlen(str_cat);
	for (i = 0; i < n && s2[i] != '\0'; i++)
	{
		str_cat[len + i] = s2[i];
	}
	str_cat[len + i] = '\0';
	return (str_cat);
}
