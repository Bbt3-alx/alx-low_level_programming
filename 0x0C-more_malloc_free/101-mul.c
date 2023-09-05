#include "main.h"

int main(int argc, char *argv[])
{
	int i, result = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i <= argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);

	return (0);
}
