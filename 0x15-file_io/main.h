#ifndef LIST_H
#define LIST_H
#define BUFFER_SIZE 1024
#define PERMISSIONS 0664
#define USAGE_ERROR 97
#define READ_ERROR 98
#define WRITE_ERROR 99
#define CLOSE_ERROR 100

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif /* LIST_H */
