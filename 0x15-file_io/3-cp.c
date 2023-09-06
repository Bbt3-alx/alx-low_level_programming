#include "main.h"
/**
 * main - copies the content of a file to another file.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0;
 */

int main(int argc, char **argv)
{
	char *buffer, *usage_message;
	int source_file, destination_file;
	ssize_t bytes_read, bytes_write;

	/* Check if the number of argument is the correct one */
	if (argc != 3)
	{
		usage_message = "Usage: cp file_from file_to\n";
		write(STDERR_FILENO, usage_message, strlen(usage_message));
		exit(USAGE_ERROR);
	}

	/* Allocate memory for the buffer */
	buffer = malloc(BUFFER_SIZE);
	if (buffer == NULL)
	{
		exit(EXIT_FAILURE);
	}

	/* Try to open the file 1, to find out if it exist */
	source_file = open(argv[1], O_RDONLY);
	if (source_file == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(READ_ERROR);
	}

	/* Try to open the file 2 in READ AND WRITE MODE */
	destination_file = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, PERMISSIONS);

	/* WRITE INTO DESTINATION FILE */
	do {
		bytes_read = read(source_file, buffer, sizeof(buffer));
		if (bytes_read == -1)
		{
			fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(READ_ERROR);
		}
		bytes_write = write(destination_file, buffer, bytes_read);
		if (bytes_write == -1)
		{
			fprintf(stderr, "Error: Can't write to \n", argv[2]);
			exit(WRITE_ERROR);
		}
	} while (bytes_read > 0);

	/* If one of the file descriptor can't close, exit with code 100 */
	if (close(source_file) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", source_file);
		free(buffer);
		exit(CLOSE_ERROR);
	}
	if (close(destination_file) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", destination_file);
		free(buffer);
		exit(CLOSE_ERROR);
	}

	free(buffer);
	return (0);
}
