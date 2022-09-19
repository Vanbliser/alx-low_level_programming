#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse, followed by a new
 * line.
 * @s: pointer to char
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i != -1; --i)
		_putchar(*(s + i));
	_putchar('\n');
}

/**
 * _strlen - a function that prints a string, in reverse, followed by a new
 * line.
 * @s: pointer to char
 *
 * Return: return the length of string
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; *(s + length) != '\0'; ++length)
	;
	return (length);
}

