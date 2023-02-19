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

	printf("%lu %lu %lu \n", (unsigned long) sizeof(myInt), (unsigned long) sizeof(myChar), (unsigned long) sizeof(myDouble));
	return (0);
}
