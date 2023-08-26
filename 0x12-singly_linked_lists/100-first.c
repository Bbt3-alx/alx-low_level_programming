#include <stdio.h>
#include <stdlib.h>

/**
 * premain  - execute before the main
 * Return: Nothing
 */
void __attribute__((constructor)) premain();

void premain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
