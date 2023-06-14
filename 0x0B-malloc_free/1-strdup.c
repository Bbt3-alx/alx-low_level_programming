#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: String to be copyed to the new space.
 * Return: On succes returns a pointer to the duplicated string or NULL else.
 */

char *_strdup(char *str)
{
	int i = 0;
	char *new;

	new = malloc(strlen(str) + 1);
	if (new == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		new[i] = str[i];
		i++;
	}
	return (new);
}
