#include "main.h"
#include <stdio.h>

/**
 * read_textfile - a function that reads a text file and prints it to the POSIX
 * standard output.
 * @filename: the filename of the text file
 * @letters: the number of letters it should read and print
 * Description: if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 *
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	int fd;
	ssize_t no_letters;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY, 0100);
	if (fd == -1 || (letters <= 0))
		return (0);
	text = malloc((sizeof(char) * letters) + 1);
	no_letters = read(fd, text, letters);
	printf("\nno_letters=%li, letters=%lu\n", no_letters, letters);
	if (no_letters < 0)
	{
		free(text);
		return (0);
	}
	text[no_letters] = '\0';
	write(1, text, no_letters);

	close(fd);
	free(text);

	return (no_letters);
}

