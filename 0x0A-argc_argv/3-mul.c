#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - The main function which will multiplies two numbers.
 * @argc: The number of argument.
 * @argv: The vector of argument.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int result = 1;
	int i;

	for (i = 1; i < argc; i++)
	{
		int x = strtol(argv[i], NULL, 10);

		result *= x;
	}
	if (argc == 1)
	{
		puts("Error");
		return (1);
	}
	printf("%d\n", result);
	return (0);
}

