#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (0);
}
