#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 *_putchar - print the string '_putchar' to stdout
 *
 * Return: On success 1.
 * On error, -1 i sreturned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
