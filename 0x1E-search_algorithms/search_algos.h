#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H


#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
