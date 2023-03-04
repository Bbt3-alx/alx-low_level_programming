#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - that changes all lowercase letters of a string
 * to uppercase.
 * @a: String
 * Return: String.
 */
char *string_toupper(char *a)
{
	int i;

	i = 0;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (islower(a[i]))
		{
			a[i] = toupper(a[i]);
		}
		continue;
		i++;
	}
	return (a);
}
