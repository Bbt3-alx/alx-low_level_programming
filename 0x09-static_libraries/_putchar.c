#include <unistd.h>

/**
 * _putchar - This is a putvhar function.
 * @c: String.
 * Return: an Integer.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
