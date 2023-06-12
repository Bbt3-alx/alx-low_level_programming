#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code.
 * @argc: The argument count
 * @argv: Thw argument vector
 * Return:0 on succes, else 1.
 */
int main(int argc, char **argv)
{
	int result = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}	
	result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);

	return (0);
}
