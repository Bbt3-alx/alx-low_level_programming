#include "main.h"

/**
 * create_file - create a file
 * @filename: The name of the file to be created
 * @text_content: The content to be written to the file
 * Return:1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, _write, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	_write = write(fd, text_content, len);

	if (fd == -1 || _write == -1)
		return (-1);

	close(fd);

	return (1);
}
