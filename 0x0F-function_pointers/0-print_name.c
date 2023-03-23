#include <stdio.h>
#include <stdio.h>

/**
 * print_name - This function print a given name
 * @name: Name to be printed.
 * @f: A function pointer.
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{

	f(name);
	putchar('\n');
}
