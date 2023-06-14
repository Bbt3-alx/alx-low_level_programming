#include <strio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: String 1
 * @s2: String 2
 * Return:  newly allocated space in memory.
 */
 char *str_concat(char *s1, char *s2)
{
	int i;
	char *new_char;

	if (s1 == NULL)
	{
		return (NULL);
	}
	
	new_char = malloc(strlen(s1) + strlen(s2) + 1);
	if (new_char == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(new_char); i++)
	{
		if (s1[i] != '\0')
		{
			new_char[i] = s1[i];
		}
		new_char[i] = s2[i];

	}
	new_char[i + 1] = '\0'; 
	return (new_char);
}


