#include "main.h"

/**
 * _strdup - function returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to be duplicated
 * Return: On success, the function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available or if str = NULL.
 */
char *_strdup(char *str)
{
	char *new_str;
	int i;

	if (str == NULL)
		return (NULL);

	new_str = malloc(strlen(str) + 1);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		new_str[i] = str[i];

	new_str[i + 1] = '\0';
	return (new_str);
}
