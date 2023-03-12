#include <stdio.h>
#include <stdlib.h>

/**
 * argcArgv - This function prints its name, followed by a new line.
 * @argc: The lenght of the argument in function.
 * @argv: The argument vector
 * Return: An int.
 */
int main(__attribute__((__unused__)) int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
