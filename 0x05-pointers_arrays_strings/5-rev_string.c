#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: pointer to char
 */
void rev_string(char *s)
{
	int size = _strlen(s);
	int end = size - 1;
	int start;
	char tmp;

	for (start = 0; start < size / 2; ++start)
	{
		tmp = *(s + end);
		*(s + end) = *(s + start);
		*(s + start) = tmp;
		--end;
	}

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

