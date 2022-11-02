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
	char *file_to, *file_from, buffer[1024];
	int fd_file_to, fd_file_from, cls;
	ssize_t num_rd = 1024, num_wr;
	char rd[] = "read from file";
	char cl[] = "close fd";
	char wr[] = "write to";

	if (ac > 3 || ac < 3)
	{
		write(STDOUT_FILENO, "Usage: cp file_from file_to\n", 28);
		return (97);
	}

	file_to = av[2];
	file_from = av[1];

	fd_file_from = open(file_from, O_RDONLY);
	if (fd_file_from == -1)
		error_msg(0, 98, rd, file_from);
	fd_file_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (fd_file_to == -1)
		error_msg(0, 99, wr, file_to);

	buffer[1024] = '\0';
	while (num_rd == 1024)
	{
		num_rd = read(fd_file_from, buffer, 1024);
		if (num_rd == -1)
			error_msg(0, 98, rd, file_from);
		num_wr = write(fd_file_to, buffer, 1024);
		if (num_wr == -1)
			error_msg(0, 99, wr, file_to);
	}

	cls = close(fd_file_to);
	if (cls == -1)
		error_msg(fd_file_to, 100, cl, NULL);
	cls = close(fd_file_from);
	if (cls == -1)
		error_msg(fd_file_from, 100, cl, NULL);

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
		dprintf(STDOUT_FILENO, "Error: Can't %s %S\n", str, str1);
	if (str1 == NULL)
		dprintf(STDOUT_FILENO, "Error: Can't %s %d\n", str, fd);

	exit(ret);
}

