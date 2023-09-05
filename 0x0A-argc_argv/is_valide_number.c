#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - check the code
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0
 */
{
	if(*s == '-' || *s == '+')
		s++;

	while (*s != '\0')
	{
		if (!isdigit(*s))
		{
			return (0);
		}
		s++;
	}
	return (1);
}


