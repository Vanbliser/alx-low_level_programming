#include "main.h"

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

