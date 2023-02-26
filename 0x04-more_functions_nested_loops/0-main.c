#include "main.h"

/**
 * main - checik the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	char a;

	a = 'A';
	printf("%c: %d\n", a, _isupper(a));
	a = 'a';
	printf("%c: %d\n", a, _isupper(a));
	return (0);
}
