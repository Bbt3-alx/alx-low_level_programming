#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H


#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

int linear_search(int *array, size_t size, int value);
int _putchar(char c);
void write_char(char c);
void write_string(const char *str);
void write_int(int num);
void _printf(const char *format, ...);

#endif /* SEARCH_ALGOS_H */
