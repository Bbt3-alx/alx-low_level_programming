#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * char string_nconcat - concatenate two strings
 * @s1: String 1
 * @s2: String 2
 * @n: The n character to be concatenate.
 * Return: to a newly allocated space in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* Declare variables and initialize them to 0 */
	char *concat;
	unsigned int len1 = 0;
	/* unsigned int i = 0; */
	unsigned int a = 0, j = 0;

	/* Check if NULL character is passed to strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	/* Let gets the size of the string s1 */
	while (s1[len1] != '\0')
	{
		len1++;
	}

	/* Allocate a required space of memory for the new space */
	concat = malloc(strlen(s1) + n + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	while (s1[j] != '\0')
	{
		concat[j] = s1[j];
		j++;
	}
	while (a < n)
	{
		concat[j] = s2[a];
		a++;
		j++;
	}
	concat[j] = '\0';
	return (concat);
}
