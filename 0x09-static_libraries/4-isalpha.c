#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (-1);
}

