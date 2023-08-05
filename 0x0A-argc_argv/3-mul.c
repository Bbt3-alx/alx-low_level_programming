#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * is_valide_number - check if character is a number
 * @s: Array of string
 * Return: 1 if the carater is number, 0 if not.
 */
int is_valide_number(const char *s)
{
	if (*s == '-' || *s == '+')
		s++;
	while (*s != '\0')
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}
/**
 * main - check the code
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int result = 0, i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < 2; i++)
	{
		if (!is_valide_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
