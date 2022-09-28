#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: the string
 *
 * Return: returns the length of the string as an int.
 */
int _strlen_recursion(char *s)
{
	return (length_of_string(s, 0));
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
