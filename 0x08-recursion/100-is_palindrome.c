#include "main.h"
/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * and 0 if not. An empty string is a palindrome
 * @s: the string
 *
 * Return: Return int 1 if palindrome, else 0.
 */
int is_palindrome(char *s)
{
	int lent = length_of_string(s, 0) - 1;

	if (lent == 0)
		return (1);
	else
		return (check(s, s + lent));
}
/**
 * check - a function that checks if a and b are the same
 * @a: the first character
 * @b: the second character
 *
 * Return: returns 1 if the same, else returns 0
 */
int check(char *a, char *b)
{
	if (*a != *b)
	{
		return (0);
	}
	if (a == b || a + 1 == b)
	{
		return (1);
	}
	else
	{
		return (check(a + 1, b - 1));
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
