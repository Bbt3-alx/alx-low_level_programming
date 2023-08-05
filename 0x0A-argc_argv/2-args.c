#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 * @argv: Argument vector
 * @argc: Argument count
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		puts(argv[i]);

	return (0);
}
