#include <stdio.h>
#include "main.h"

/**
 * rev_string - That function reverse a string
 * @s: String]
 * Return: anything.
 */
void rev_string(char *s)
{
	int i;
	int p;
	char ch;

	i = 0;
       	p = 0;

	while(*(s + i) != '\0')
	{
		i += 1;;
	}
	i -= 1;
	while (ch < i)
	{
		ch = s[i];
		s[i] = s[p];
		s[p] = ch;
		p++;
		i--;
	}
}
