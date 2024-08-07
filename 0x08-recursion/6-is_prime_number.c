#include "main.h"

/**
 * check_prime_number - This functionhelp to find a factor of n.
 * @x: The base number.
 * @y: The factor of x.
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int check_prime_number(int x, int y)
{
	if (y * y > x)
		return (1);

	if (x % y == 0)
		return (0);

	return (check_prime_number(x, y + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: The number to be verifyed if prime num or not.
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);


	return (check_prime_number(n, 2));
}
