#include <stdlib.h>

/**
 * _strchr - a function that locates a character in a string.
 * Description: Returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 * @s: the string
 * @c: the character
 *
 * Return: a pointer to the first occurance to c in s
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != c; ++i)
	{
		if (*(s + i) == '\0')
			return (NULL);
	}
	return (s + i);
}
