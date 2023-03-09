#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * _pow_recursion - function that returns the value of:
 *  x raised to the power of y.
 *  @x: Number.
 *  @y: Power.
 *  Return: An int.
 */
int _pow_recursion(int x, int y)
{
	int po;

	po = pow(x, y);
	if (y < 0)
	{
		return (-1);
	}
	return (po);
}
