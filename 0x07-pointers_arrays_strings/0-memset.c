#include <stdio.h>

/**
 * _memset - This function fills the first n bytes of the memory area.
 * @s: Thi param point to a memory area
 * @b: This param is the constant byte to be fill in the 
 * Memory area ponted by the param s.
 * @n: This param is the first n bytes of the memory area 
 * pointed by s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (0);
}
