#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name.
 * @name: The name to be printed
 * @f: A function.
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
