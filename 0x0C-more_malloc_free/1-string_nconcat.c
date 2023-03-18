#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate two string
 * @s1: String 1;
 * @s2: String 2;
 * @n: The number of bytes to be concatenate.
 * Return: A char pointer to the new memory location.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int i, len1 = 0, len2 = 0;

while (s1 && s1[len1])
len1++;

while (s2 && s2[len2])
len2++;


if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

if (n > len2)
n = len2;

str = malloc((len1 + n + 1) * sizeof(char));
if (str == NULL)
return (0);

for (i = 0; i < len1; i++)
str[i] = s1[i];

for (; i < (len1 + n); i++)
str[i] = s2[i - len1];

str[i] = '\0';
return (str);
}
