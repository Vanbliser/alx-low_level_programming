#include <unistd.h>
/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: pointer to a char
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; ++i)
		write(1, (str + i), 1);
	write(1, "\n", 1);
}
