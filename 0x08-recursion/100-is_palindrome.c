#include "main.h"

/**
 * check_palindrome - Check if 's' is palindrom
 * @s: String be verified if palindrome or not.
 * @len: The lenght of s.
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int check_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);

	if (*s != s[len - 1])
		return (0);

	return (check_palindrome(s + 1, len - 2));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: The string to be verified if palindrome or not.
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (s == NULL || *s == '\0')
		return (1);
	return (check_palindrome(s, len));
}
