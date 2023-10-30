#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to be read
 * @letters: the number of letters it should read and print
 * Return: The actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t reads;
	char *buf;
	ssize_t writes;


	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (!fd)
		return (0);

	buf = malloc(sizeof(char) * letters);

	reads = read(fd, buf, letters);
	writes = write(STDOUT_FILENO, buf, reads);

	free(buf);
	close(fd);
	
	return (writes);
}
