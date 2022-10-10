#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * The returned pointer shall point to a newly allocated space in memory, which
 * contains s1, followed by the first n bytes of s2, and null terminated
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes to be copied from the second string
 *
 * Return: returns a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, len2, lenT, i, j;

	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	n = (n >= len2) ? len2 : n;
	lenT = len1 + n;
	ptr = malloc(sizeof(char) * (lenT + 1));
	if (ptr == NULL)
		return (ptr);
	*(ptr + lenT) = '\0';
	for (i = 0; *(s1 + i) != '\0'; ++i)
		*(ptr + i) = *(s1 + i);
	for (j = 0; j < n; ++j)
	{
		*(ptr + i) = *(s2 + j);
		++i;
	}
	return (ptr);
}
/**
 * _strlen - a function that returns the length of a string
 * @str: the string
 *
 * Return: return the length of the string as an unsigned int
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; *(str + i) != '\0'; ++i)
	;
	return (i);
}
