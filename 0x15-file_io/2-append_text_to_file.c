#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: append_text_to_file
 * @text_content: is the NULL terminated string to add at the end of the fie
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written;
	int content_size = 0;

	if (!filename)
		return (-1);

	/* OPEN THE FILE IN APPEND MODE */
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	/* APPEND THE TEXT_CONTENT AT THE END OF THE FILE */
	if (!text_content)
	{
		close(fd);
		return (1);
	}

	content_size = strlen(text_content);
	written = write(fd, text_content, content_size);
	if (written == -1 || written != content_size)
	{
		close(fd);
		return (-1);
	}

	return (1);
}
