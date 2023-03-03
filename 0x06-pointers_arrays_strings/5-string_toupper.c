#include <stdio.h>

/**
 * string_toupper - that changes all lowercase letters of a string to uppercase.
 * @*: String
 * Return: String.
 */
char *string_toupper(char *)
{
	char *a;
	int i;
	char str;

	i = 0;
	while (a[i] != '\0')
	{
		if (islower(a[i]))
		{
			str = toupper(a[i]);
		}
		continue;
		i++;
	}

