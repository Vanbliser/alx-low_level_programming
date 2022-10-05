#include "main.h"
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all the arguments of your program.
 * Returns NULL if ac == 0 or av == NULL
 * Returns a pointer to a new string, or NULL if it fails
 * Each argument should be followed by a \n in the new string
 * @ac: the arument count
 * @av: the array of arguments
 *
 * Return: a pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; ++i)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; ++j)
		;
		k += j;
	}
	k = k + i - 1 + 2;
	ptr = malloc(sizeof(char) * k);
	for (i = 0; i < ac; ++i)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; ++j)
		{
			*(ptr + l) = *(*(av + i) + j);
			l++;
		}
		*(ptr + l) = '\n';
		l++;
	}
	return (ptr);
}
