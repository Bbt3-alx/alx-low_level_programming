#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code.
 * @argc: The argument count
 * @argv: Thw argument vector
 * Return: An integer of the number of argument passed to the function
 */
int main(int argc, char **argv)
{
	if (argv)
		printf("%d\n", argc);
	else
		printf("No argument provided");

	return (0);
}
