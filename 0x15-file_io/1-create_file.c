#include "main.h"
/**
 * create_file - creates a file.
 * @filename: Name of the file to be created
 * @text_content: The text to be filed in the new file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int content_size = 0;

	if (text_content != NULL)
		content_size = strlen(text_content);
	else
		text_content = "";

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		write(fd, text_content, content_size);
	close(fd);
	return (1);
}
