#include "main.h"

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
	int fd, cl;
	ssize_t no_read, no_print;

	/* if filename is NULL, return 0 */
	if (filename == NULL)
		return (0);

	/* if an error occured in open system call, return 0 */
	fd = open(filename, O_RDONLY, 0100);
	if (fd == -1)
		return (0);

	/* read the file to a dynamically allocated memory */
	if (letters > SSIZE_MAX)
		return (0);
	text = malloc((sizeof(char) * letters) + 1);
	no_read = read(fd, text, letters);
	if (no_read == -1) /* if error occured in read, free malloc & return 0 */
	{
		free(text);
		return (0);
	}
	text[no_read] = '\0';

	/* write to standard output or return 0 if failed */
	no_print = write(STDOUT_FILENO, text, no_read);
	if (no_print == -1 || no_print != no_read)
		return (0);

	cl = close(fd);
	if (cl == -1)
		exit(EXIT_FAILURE);
	free(text);

	/* return number of letters read or printed */
	return (no_print);
}

