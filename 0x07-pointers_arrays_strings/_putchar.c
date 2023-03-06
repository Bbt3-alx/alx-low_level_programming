#include <unistd.h>

/**
 * _putchar - writes the chracter c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * Onerror, -1 is returned, and erno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
