#include "main.h"
#include <stdio.h>
/**
 * wildcmp - a function that compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0.
 * The special char * can replace any string (including an empty string)
 * @s1: the first string
 * @s2: the second string
 *
 * Return: Return integer 1 if the strings are same, else return integer 0.
 */
int wildcmp(char *s1, char *s2)
{
	char end_of_line = '\0';
	char *tmp;

	tmp = &end_of_line;

	return (chk(s1, s2, tmp));
}
/**
 * chk - a function that checks if a and b are the same
 * @a: the first character
 * @b: the second character
 * @tmp: a temporary pointer
 *
 * Return: returns 1 if the same, else returns 0
 */
int chk(char *a, char *b, char *tmp)
{
	if (*b == '*')
	{
		a = wildcard(a, b, tmp);
		b = (*(b + 1) == '*') ? last_wild_card('*', b, tmp) : b;
		b++;
	}
	if (*a == '*')
	{
		b = wildcard(b, a, tmp);
		a = (*(a + 1) == '*') ? last_wild_card('*', a, tmp) : a;
		a++;
	}
	if (*a != *b)
	{
		return (0);
	}
	else if (*a == '\0' && *b == '\0')
	{
		return (1);
	}
	else
	{
		return (chk(a + 1, b + 1, tmp));
	}
}
/**
 * wildcard - a function that checks for wildcard between two strings
 * @a: the first string
 * @b: the second string
 * @tmp: a temporary pointer
 *
 * Return: return the pointer to the character after the wildcard.
 */
char *wildcard(char *a, char *b, char *tmp)
{
	if (*a == *(b + 1) && chk(a, b + 1, tmp))
	{
		return (a);
	}

	if (*a == '\0')
	{
		return (a);
	}
	else
	{
		if (*(b + 1) == '*')
			b++;
		else
			a++;
		return (wildcard(a, b, tmp));
	}
}
/**
 * last_wild_card - a function that accepts a character and a string and
 * returns the address of the last sequential occurance of the character
 * in the string.
 * @a: the character
 * @b: the string
 * @tmp: this is a tmp variable
 *
 * Return: returns a pointer to the address of the last occurance.
 */
char *last_wild_card(char a, char *b, char *tmp)
{
	if (a == *b)
		tmp = b;

	if (*b != a)
	{
		return (tmp);
	}
	else
	{
		++b;
		return (last_wild_card('*', b, tmp));
	}
}
