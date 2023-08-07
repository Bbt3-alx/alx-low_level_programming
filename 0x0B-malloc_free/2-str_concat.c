#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: String 1
 * @s2: String 2
 * Return: A pointer to the newly allocated space in memory
 * which contains the contents of s1,
 * followed by the contents of s2, and null terminated or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *new_s;
	int j, i;
	int new_len = strlen(s1) + strlen(s2) + 1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	new_s = (char *)malloc(new_len);

	if (new_s == NULL)
		return (NULL);

	for (i = 0; i < new_len && s1[i] != '\0'; i++)
		new_s[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		new_s[i] = s2[j];
		i++;
	}
	new_s[i + 1] = '\0';
	return (new_s);
}
