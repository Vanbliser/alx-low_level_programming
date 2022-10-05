#include "main.h"
#include <stdlib.h>
/**
 * strtow - a function that splits a string into words.
 * The function returns a pointer to an array of strings (words)
 * Each element of this array should contain a single word, null-terminated
 * The last element of the returned array should be NULL
 * Words are separated by spaces
 * Returns NULL if str == NULL or str == ""
 * If your function fails, it should return NULL
 * @str: the string to be splited into words
 *
 * Return: a pointer to an array of the splited words
 */
char **strtow(char *str)
{
	char **arr;
	int size, i, j = 0, k = 0, l;

	if (str == NULL || *(str + 0) == '\0' || is_empty(str))
		return (NULL);
	size = no_of_words(str);
	arr = malloc(sizeof(char *) * (size + 1));
	*(arr + size) = NULL;

	for (i = 0; *(str + i) != '\0'; ++i)
	{
		if (!(_isspace(*(str + i))))
		{
			++j;
			if (_isspace(*(str + i + 1)) || *(str + i + 1) == '\0')
			{
				*(arr + k) = malloc(sizeof(char) * j + 1);
				*(*(arr + k) + j) = '\0';
				for (l = 0; l < j; ++l)
				{
					*(*(arr + k) + l) = *(str + (i - j + (l + 1)));
				}
				k++;
			}
		}
		else
		{
			i += no_of_space((str + i));
			j = 0;
		}

	}
	return (arr);
}

/**
 * no_of_words - a function that returns the number of words in a string
 * @str: the string
 *
 * Return: the number of words in a string as int
 */
int no_of_words(char *str)
{
	int i, j = 0;

	for (i = 0; *(str + i) != '\0'; ++i)
	{
		if (_isspace(*(str + i)))
		{
			i += no_of_space((str + i));
		}
		else
		{
			if (_isspace(*(str + i + 1)) || *(str + i + 1) == '\0')
				j++;
		}
	}
	return (j);
}

/**
 * _isspace - a function that checks if a character is a space
 * @c: the character
 *
 * Return: returns 1 if is space, else return 0
 */
int _isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\f' || c == '\r' || c == '\t')
		return (1);
	else
		return (0);
}

/**
 * no_of_space - a function that counts the number of adjacent empty space
 * @str:
 *
 * Return: the number of spaces
 */
int no_of_space(char *str)
{
	int i;

	for (i = 0; _isspace(*(str + i)); ++i)
	;
	return (--i);
}
/**
 * is_empty - a function that checks if a string is empty
 * @str: the string
 *
 * Return: return 1 if empty, else return 0
 */
int is_empty(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; ++i)
	{
		if (!(_isspace(*(str + i))))
			return (0);
	}
	return (1);
}
