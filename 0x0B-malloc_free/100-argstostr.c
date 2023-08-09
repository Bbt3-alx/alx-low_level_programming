#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: Argument count
 * @av: Argument vector.
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *new_str;
	int total_len = 0;
	int i, j, k = 0;

	if (ac == 0 || av == NULL)
	{
		printf("Imposible");
		return (NULL);
	}
	
	
	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]);
	}
	total_len += ac;

	new_str = malloc(total_len + 1);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new_str[k++] = av[i][j];
		}
		new_str[k++] = '\n';

		if (i < ac - 1)
			new_str[k++] = ' ';
	}
	
	new_str[k] = '\0';
	return (new_str);
}
	
