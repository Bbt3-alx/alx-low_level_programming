#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pre_main - Print is executed before the main function.
 * Return: Nothing.
 */
void __attribute__((constructor)) pre_main()
{
	printf("You\'re beat! and yet, you must allow,\n \
I bore my house upon my back!\n");
}
