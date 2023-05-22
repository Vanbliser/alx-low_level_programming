#include "main.h"
#include <stddef.h>
/**
 * is_equal - A funtion that compares the equality of two string
 * @str: the first string
 * @strr: the second string
 *
 * Return: return 1 if the two string are equal. else return 0.
 */
unsigned int is_equal(char *str, char *strr)
{
	int i;

	for (i = 0; *(str + i) != '\0'; ++i)
	{
		if (*(str + i) != *(strr + i))
			return (0);
	}
	return (1);
}
/**
 * _strstr - a function that locates a substring.
 * The function finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes (\0) are not compared
 * @haystack: the string
 * @needle: the substring
 *
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *nil = NULL;
	unsigned int i, j;
	char arr[80] = "";
	char *ptr;

	for (i = 0; *(haystack + i) != '\0'; ++i)
	{
		for (j = 0; *(needle + j) != '\0'; ++j)
		{
			arr[j] = *(haystack + i + j);
		}
		arr[j] = '\0';
		if (is_equal(arr, needle))
		{
			ptr = &haystack[i];
			return (ptr);
		}
	}
	return (nil);
}
