#include <stdio.h>
#include <string.h>

/**
 * _strcmp - This function compare two given string
 * @s1: First Strring;
 * @s2: Second String.
 * Return: 0 on succes, 1 else.
 */
char _strcmp(char *s1, char *s2)
{
	int cmp;
	cmp = strcmp(s1, s2);
	return (cmp);
}
