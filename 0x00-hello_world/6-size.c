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
	long int myLong;
	float myFloat;

	printf("Size of a char: %lu byte(s\n", (unsigned long) sizeof(myChar));
	printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(myInt));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(myLong));
	printf("Size of a long long int: %lu byte(s)\n",
			(unsigned long) sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(myFloat));
	return (0);
}
