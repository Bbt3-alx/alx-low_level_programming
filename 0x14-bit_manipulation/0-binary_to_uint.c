#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: The binary to be converted
 * Return: The conversted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		total <<= 1;
		if (b[i] == '1')
			total += 1;
	}

	return (total);
}
