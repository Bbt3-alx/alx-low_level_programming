#include <string.h>
#include <stdio.h>

/**
 * _strspn - This function will gets the lenght of a prefix substring.
 * @s: The string in which we want to get the substring lenght.
 * @accept: The substring world.
 * Return: the number of bytes in the initial segment of s
 * which consist only of byt from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;

	len = strspn(s, accept);
	return (len);
}
