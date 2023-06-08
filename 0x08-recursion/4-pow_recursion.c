#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponant.
 * Return: The value of the of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
if (y == 0)
return (1);
else if (y < 0)
{
return (-1);
}
return (x * _pow_recursion(x, y - 1));
}
