#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *_strchr(char *s, char c)
{
	char *ch;

	ch = strchr(s, c);
	return (ch);
}
