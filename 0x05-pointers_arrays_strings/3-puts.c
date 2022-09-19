#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: pointer to a char
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; ++i)
		_putchar(*(str + i));
	_purchar('\n');
}

