#include "main.h"

/**
 * _isupper - Thi function will check if a given char is upper or not.
 * @c: String.
 * Retrurn: Integer.
 */
int _isupper(int c)
{
	int i = 0;

	for (i = 0; i < strlen([c]); i++)
	{
		if (isupper(c[i]))
		{
			putchar(c[i]);
		}
		continue;
	}
	return (0);
}
