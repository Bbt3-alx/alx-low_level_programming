#include <stdio.h>
#include <string.h>

/**
 * print_chessboard - this function prints the checcboard.
 * @a: String of chessboard.
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		if (j == 8)
		{
			printf("\n");
		}
		
	}
	printf("\n");
}
