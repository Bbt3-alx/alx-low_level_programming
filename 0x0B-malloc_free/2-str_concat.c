#include <stdio.h>
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
	int i, j;
	char *new_char;
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);

	if (s1 == NULL)
	{
		return (NULL);
	}
	
	new_char = malloc(s1_len + s2_len + 1);
	if (new_char == NULL)
	{
		return (NULL);
	}
	j = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		new_char[i] = s1[i];
		i++;	
	}
	while (s2[j] != '\0')
	{
		new_char[i] = s2[j];
		i++;
		j++;
	}

	new_char[i + 1] = '\0'; 
	return (new_char);
}


