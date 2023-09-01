#include <unistd.h>
#include <stdio.h>
/**
 * _putchar - write a character to the stdout.
 * @c: The character to be written
 * Return: 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
