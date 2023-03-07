#include <stdio.h>
#include <string.h>

/**
 * _strchr - This function search a character in a string.
 * @s: This param represent the String in which we will search
 * the character in variable c.
 * @c: This param is the character that we want to search
 * within the String in the variable s.
 * Return: A pointer to the first occurence of the charater c
 * in the string s, or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i, len;

	len = strlen(s);
	i = 0;
	for (i = 0; i <= len; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		continue;
	}
	return (NULL);
}
