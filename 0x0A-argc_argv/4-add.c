#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: The argument count.
 * @argv: The argument vector.
 * Return: 0 on success else 1.
 */
int main(int argc, char *argv[])
{
	int i, result = 0;
	char *endptr;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		result += strtol(argv[i], &endptr, 10);
		if (*endptr != '\0' && *endptr != ' ')
		{
			printf("Error\n");
			return (1);
		}

	}
	printf("%d\n", result);

	return (0);
}

