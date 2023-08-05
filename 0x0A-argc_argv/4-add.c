#include <stdlib.h>
#include  <stdio.h>
#include <ctype.h>

/**
 * is_number - Check the char it is number or not
 * @s: Array of character
 * Return: 1 if a character is number, else 0 is returned
 */
int is_number(const char *s)
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
 * @argv: Argument vector
 * @argc: argument count
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int sum = 0, i = 1;

	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

