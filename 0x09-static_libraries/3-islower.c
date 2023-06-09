#include <ctype.h>
#include "main.h"
#include <stdlib.h>
/**
 * _islower - check the code.
 *
 * @c: charactere to check
 * @return 1 if lower, 0 else
 *
 * Return: Always return 0.
 */
int _islower(int c)
{
	if islower(c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
