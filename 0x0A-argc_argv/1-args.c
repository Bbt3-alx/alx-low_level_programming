#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int counter = 0, i = 1;

	for(i = 1; i < argc; i++)
	{
		counter++;
	}
	printf("%d\n", counter);

	return (0);
}
