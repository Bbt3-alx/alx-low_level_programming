#include <ctype.h>
#include <stdio.h>
#include <string.h>

/**
 ** _islower - This function transform an upper case to lower.
 * @c: String.
 * Return: An integer.
 */
int _islower(char c)
{
	int i = 0;

	for (i = 0; i < strlen(c); i++)
	{
		if (isupper(c[i]))
		{
			c[i] = tolower(c[i]);
		}
		continue;
	}
	putchar('\n');
	return (0);
}
