#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: The binary to be converted
 * Return: The conversted number.
 */
unsigned int binary_to_uint(const char *b)
{
	if (!b)
		return (0);

	unsigned int total = 0;
	int i, decimalValue = 1, len = strlen(b);
	
	for (i = (len -1); i >= 0; i--)
	{
		if (b[i] == '1')
		{
			total += decimalValue;
			decimalValue *= 2;
		}
		else if (b[i] == '0')
			total += 0;
		else
			total = 0;
	}
	return (total);
}
