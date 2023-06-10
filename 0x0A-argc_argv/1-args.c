#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code.
 * @argc: The argument count
 * @argv: Thw argument vector
 * Return: An integer of the number of argument passed to the function
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += 1;
		}
		printf("%d\n", sum);
	}
	else
		printf("%d\n", 0 );

	return (0);
}
