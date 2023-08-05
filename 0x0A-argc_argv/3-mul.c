#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - check the code
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int result = 0, i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}


	for (i = 0; i < 2; i++)
	{
		for (j = 0; argv[i + 1][j] != '\0'; j++)
		{
			if (!isdigit(argv[i + 1][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);

	return (0);
}
