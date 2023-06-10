#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code.
 * @argc: The argument count
 * @argv: Thw argument vector
 * Return: Always 0;
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
