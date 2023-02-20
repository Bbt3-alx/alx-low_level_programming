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

	printf("%lu\n", (unsigned long) sizeof(myInt));
	printf("%lu\n", (unsigned long) sizeof(myChar));
	printf("%lu\n", (unsigned long) sizeof(myDouble));
	return (0);
}
