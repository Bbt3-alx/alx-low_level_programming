#include <stdio.h>
#include <stdlib.h>

/**
 * main - The main function, it print all arguments it receives.
 * @argc: The numbers of argument.
 * @argv: The vector of argument.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
