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
	unsigned int i, j, len1;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);

	new_str = malloc(n + len1 + 1);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		new_str[i] = s2[j];
		i++;
	}
	new_str[i] = '\0';

	return (new_str);
}

