#include "main.h"

/**
 * _strcat - This function appends the src string to the dest string
 * @dest: First String
 * @src: Second String
 * Return: String.
 */
char *_strcat(char *dest, char *src)
{
        char *cat;

        cat = strcat(dest, src);
        return (cat);
}
