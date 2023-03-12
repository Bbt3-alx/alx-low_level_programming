#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - The main function that will adds positive numbers.
 * @argc: The number of argument
 * @argv: The argument vector
 * Return: Always 0;
 */
int main(int argc, char **argv)
{
long int result = 0;
int i;

for (i = 1; i < argc; i++)
{
	char *ptr;
	long int x = strtol(argv[i], &ptr, 10);

	if (*ptr != '\0')
	{
		printf("Error\n");
		return (1);
	}
	result += x;
}
printf("%ld\n", result);
return (0);
}
