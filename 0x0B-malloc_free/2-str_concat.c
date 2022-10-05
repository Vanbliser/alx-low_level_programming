#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - a function that concatenates two strings. The returned pointer
 * should point to a newly allocated space in memory which contains the
 * contents of s1, followed by the contents of s2, and null terminated
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the newly created string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l, size;
	int m = 0;
	char *str;
	char *null = "";

	if (s1 == NULL)
	{
		s1 = null;
	}
	if (s2 == NULL)
	{
		s2 = null;
	}
	for (i = 0; *(s1 + i) != '\0'; ++i)
	;
	for (j = 0; *(s2 + j) != '\0'; ++j)
	;

	size = i + j;
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; ++k)
	{
		*(str + k) = *(s1 + k);
	}
	for (l = k; l < size; ++l)
	{
		*(str + l) = *(s2 + m++);
	}
	return (str);
}
