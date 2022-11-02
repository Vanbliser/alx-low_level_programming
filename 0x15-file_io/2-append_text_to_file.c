#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Description: Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist or if you do
 * not have the required permissions to write the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length;
	ssize_t wr;

	if (filename == NULL)
		return (-1);
	if (text_content[0] == '\0')
		return (0);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (fd);

	for (length = 0; *(text_content + length) != '\0'; ++length)
		;
	wr = write(fd, text_content, length);

	close(fd);

	if (wr != length)
		return (-1);
	else
		return (1);
}

