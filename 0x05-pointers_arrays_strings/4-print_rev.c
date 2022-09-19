#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse, followed by a new 
 * line.
 * @s: pointer to char
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i != 0; --i)
	{
		_putchar(*(s + i));
	}
}


/**
 * _strlen - a function that returns the length of a string.
 * @s: pointer to a char
 *
 * Return: the lenght of a string
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; *(s + length) != '\0'; ++length)
	;
	return (length);
}

