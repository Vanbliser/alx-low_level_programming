#include "main.h"

/**
 * puts_half - a function that prints half of a string,
 * followed by a new line.
 * @str: The string
 */
void puts_half(char *str)
{
	int len;
	char a;
	int lent = _strlen(str);

	if ((lent % 2) != 0)
		len = lent - (lent - 1) / 2;
	else
		len = lent - lent / 2;
	for (; len <= (lent - 1); ++len)
	{
		a = *(str + len);
		_putchar(a);
	}
	_putchar('\n');
}

/**
 * _strlen - a function that returns the length of a string.
 * @s: pointer to a string
 *
 * Return: returns the length of the string as an int
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; ++i)
	{
	}
	return (i);
}
