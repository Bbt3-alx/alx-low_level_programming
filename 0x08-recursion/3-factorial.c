#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * factorial - This function returns the factorial of a given number.
 * @n: The number of the factorial to be returned
 * Return: An integer.
 */

int factorial(int n)
{
if (n < 0)
return (-1);

if (n == 0)
return (1);

n = n *factorial(n - 1);
return (n);
}
