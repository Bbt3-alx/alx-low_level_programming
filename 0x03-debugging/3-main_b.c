#include <stdio.h>
#include "main.h"

/**
 * main - that program will test the leap year
 *Return: 0
 */

int main(void)
{
	int year = 2000;
	int month = 2;
	int day = 29;

	print_remaining_days(month, day, year);

	return (0);
}
