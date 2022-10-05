#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: a string
 *
 * Return: a pointer to the memory location containing the string
 */
char *_strdup(char *str)
{
	int i, j;
	char *strr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; *(str + i) != '\0'; ++i)
	;
	strr = malloc(sizeof(char) * (i + 1));
	if (strr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; ++j)
	{
		*(strr + j) = *(str + j);
	}
	return (strr);
}
