#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to be reading.
 * @letters: the number of letters it should read and print.
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* DECLARE A FILE DESCRIPTOR TO THE FILE TO BE READING */
	ssize_t bytes_read, written;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	/* OPEN THE FILE FOR READING ONLY */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	/* READ THE FILE */
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* WRITE THE FILE STANDART OUTPUT */
	written = write(STDOUT_FILENO, buffer, bytes_read);
	if (written == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	free(buffer);
	return (bytes_read);
}
