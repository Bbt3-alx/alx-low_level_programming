#include "main.h"

/**
 * strtow - Splits a string into words.
 * @str: The string to be splited
 * Return: returns a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	int i, j, k = 0;
	int total_len = strlen(str);
	char **words;
	int str_len = 0;

	if (str == NULL || strlen(str) <= 1)
		return (NULL);

	for (i = 0; i < str_len; i++)
	{
		if (str[i] != ' ')
		{
			total_len += 1;
		}
	}
	words = malloc(total_len * sizeof(char *) + 1);

	for (j = 0; str[j] != ' ' && str[j] != '\0'; j++)
	{
		if (str[j] != ' ')
		{
			words[k++] = str[j];
		}
	}
	return (words);
}
		
