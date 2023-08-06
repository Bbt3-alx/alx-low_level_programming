#include <stdio.h>
#include <stdlib.h>

/**
 * main -  This progrma prints the minimum number of coins 
 * to make change for an amount of money.
 * @argv: Argument vector
 * @argc: Argument count
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int coin[] = {25, 10, 5, 2, 1};
	int nb_coin = 0;
	int coin_rest;
	long unsigned int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coin_rest = atoi(argv[1]);
	
	while (i < sizeof(coin) / sizeof(int))
	{
		if (coin_rest >= coin[i])
		{
			coin_rest -= coin[i];
			nb_coin++;
		}
		else
			i++;
	}
	printf("%d\n", nb_coin);
	return (0);
}	
