#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string.
 * @str: String
 * Return: String
 */
char *cap_string(char *str)
{
	int i;
	char ch[] = " ;,.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		int j;

		for (j = 0; ch[j] != '\0'; j++)
		{

			if (str[i] == ch[j])
			{
				str[i + 1] = toupper(str[i + 1]);
			}
			continue;
		}
		if ((str[i] == '\n') || (str[i] == '\t'))
		{
			str[i + 1] = toupper(str[i + 1]);
		}
		continue;
	}
	return (str);
}
