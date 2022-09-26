#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * The function locates the first occurrence in the string s of any of the
 * bytes in the string accept
 * @s: The string to search
 * @accept: the substring to find
 *
 * Return: Returns a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *nil = NULL;
	int i;
	char *ptr;

	for (i = 0; *(s + i) != '\0'; ++i)
	{
		if (is_present(accept, *(s + i)))
		{
			ptr = &s[i];
			return (ptr);
		}
	}
	return (nil);
}

/**
 * is_present - a function that checks if a character is preset in a string
 * @str: the string
 * @a: the character
 *
 * Return: return unsigned int 1 if present, else return 0
 */
unsigned int is_present(char *str, char a)
{
	int i;

	for (i = 0; *(str + i) != '\0'; ++i)
	{
		if (a == *(str + i))
			return (1);
	}
	return (0);
}
