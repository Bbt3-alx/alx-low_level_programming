#include <stdio.h>
#include <stdlib.h>

#define QUARTER 25
#define DIME 10
#define  NICKEL 5
#define SECOND 2
#define PENNY 1

/**
 * main - check the code
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 if succes 1 else.
 */
int main(int argc, char *argv[])
{
	int cent = 0;	/* create the variable cent and initilize it to 0 */

	unsigned long int i;

	int amount;

	/* Declare coin system as an array of ints */
	int coin[] = {QUARTER, DIME, NICKEL, SECOND, PENNY};

	if (argc != 2 || argc == 1)	/* Check if the argument count is valid */
	{
		printf("Error\n");

		return (1);
	}

	amount  = atoi(argv[1]);	/* Convert the argument to an int */

	/*
	 * Now we will loop throught the coin list to count the minumum number
	 * of coins to make change for an amount of money.
	 */

	for (i = 0; i < sizeof(coin) / sizeof(int); i++)
	{
		while (amount >= coin[i])
		{
			amount -= coin[i];
			cent += 1;
		}


	}
	printf("%d\n", cent);
	return (0);
}
