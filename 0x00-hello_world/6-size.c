#include <stdio.h>
#include <stdlib.h>

/**
 *main - the program starter point
 *Return: The program end point
*/

int main(void)
{
	int myInt;
	char myChar;
	double myDouble;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(myInt));
	printf("Size of a char: %lu byte(s\n", (unsigned long) sizeof(myChar));
	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(myDouble));
	return (0);
}
