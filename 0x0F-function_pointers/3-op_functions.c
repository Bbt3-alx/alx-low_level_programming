#include "3-calc.h"

/**
 * op_add - addition operarotor function.
 * @a: Number 1
 * @b: Number 2
 * Return: The Sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substraction operator
 * @a: number 1
 * @b: number 2.
 * Return: returns the difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication operator
 * @a: Number 1
 * @b: Number 2
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operator
 * @a: number 1.
 * @b: number 2
 * Return: the result of the division of a by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Modulo operator
 * @a: number 1
 * @b: number 2
 * Return: returns the remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
