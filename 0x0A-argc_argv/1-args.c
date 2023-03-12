#include <stdio.h>
#include <stdlib.h>

/**
 * main - The main function, it will print the number of argument that's passed
 * @argc: The number of argument, passed into the main function.
 * @argv: The vector of argument, passed into the main function.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc);
	return (0);
}
