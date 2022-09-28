#include "main.h"
/**
 * _print_rev_recursion - a function that prints a string,
 * followed by a new line.
 * @s: the string
 */
void _print_rev_recursion(char *s)
{
	int len = length_of_string(s, 0);

	print_recursively(s, len);
}

/**
 * print_recursively - a function that prints recursively
 * @s: the string to print
 * @i: the length of the string
 */
void print_recursively(char *s, int i)
{
	if (i == 0)
	{
		return;
	}
	else
	{
		--i;
		_putchar(*(s + i));
		print_recursively(s, i);
	}
}

/**
 * length_of_string - a function that returns the lenght of a string
 * @s: the string
 * @i: int zero
 *
 * Return: the length of the string
 */
int length_of_string(char *s, int i)
{
	if (*s == '\0')
	{
		return (i);
	}
	else
	{
		++i;
		++s;
		i = length_of_string(s, i);

		return (i);
	}
}
