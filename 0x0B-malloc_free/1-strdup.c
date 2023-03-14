#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _strdup - This function rturn a pointer to a new string which is duplicate
 * of the string str.
 * @str: String
 * Return: A pointer to the string in str
 */
char *_strdup(char *str)
{
	char *dip;
	/* int i; */

	dip = malloc(sizeof(char) * sizeof(dip));
	if (dip == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	dip = strdup(str);
	return (dip);
}
