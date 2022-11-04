#include "main.h"
void error_msg(int fd, int ret, char *str, char *str1);

/**
 * main - a program that copies the content of a file to another file.
 * @ac: Number of argument passed to the program
 * @av: an array of strings that stores the aruments passed
 *
 * Return: 0 on success.
 */
int main(int ac, char **av)
{
	char buffer[1024], *file_to = av[2], *file_from = av[1];
	int fd_file_to, fd_file_from, cls;
	ssize_t num_rd, num_wr;

	if (ac != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_file_from = open(file_from, O_RDONLY);
	if (fd_file_from < 0)
		error_msg(0, 98, "read from file", file_from);
	fd_file_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_file_to == -1)
		error_msg(0, 99, "write to", file_to);

	while ((num_rd = read(fd_file_from, buffer, 1024)) > 0)
	{
		num_wr = write(fd_file_to, buffer, num_rd);
		if (num_wr == -1 || num_wr != num_rd)
			error_msg(0, 99, "write to", file_to);
	}
	if (num_rd == -1)
		error_msg(0, 98, "read from file", file_from);

	cls = close(fd_file_to);
	if (cls == -1)
		error_msg(fd_file_to, 100, "close fd", NULL);
	cls = close(fd_file_from);
	if (cls == -1)
		error_msg(fd_file_from, 100, "close fd", NULL);

	return (0);
}

/**
 * error_msg - a function that write to standard output and return the
 * error code.
 * @fd: file descriptor
 * @str: a string to add to the error message
 * @str1: a string to add to the error message
 * @ret: a value to return
 *
 * Return: return ret
 */
void error_msg(int fd, int ret, char *str, char *str1)
{
	if (fd == 0)
		dprintf(STDOUT_FILENO, "Error: Can't %s %s\n", str, str1);
	if (str1 == NULL)
		dprintf(STDOUT_FILENO, "Error: Can't %s %d\n", str, fd);

	exit(ret);
}

