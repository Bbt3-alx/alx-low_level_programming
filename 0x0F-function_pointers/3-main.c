#include "3-calc.h"

/**
 * main - check the code
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	/* declare variables to hold the numbers and the result of the operation */
	int num1, num2, result = 0;
	int (*operation)(int, int);


	/* check if the number of command-line arguments is valid (4 arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Convert the command-line arguments to integers using atoi */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%")
				== 0) && (num1 == 0 || num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	operation = get_op_func(argv[2]);

	if (operation != NULL)
	{
		result = operation(num1, num2);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (99);
	}

	return (0);
}
