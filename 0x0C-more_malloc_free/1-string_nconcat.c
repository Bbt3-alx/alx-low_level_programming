#include "main.h"

/**
 * string_nconcat - This function concatenates two strings.
 * @s1: String 1
 * @s2: string 2.
 * @n: The number of bytes to be allocated.
 * Return: A pointer to the newly allocated memory with the concatenate string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	new_str = malloc(n);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < n && s1[i] != '\0'; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		new_str[i] = s2[j];
		i++;
	}
	new_str[i + 1] = '\0';

	return (new_str);
}

