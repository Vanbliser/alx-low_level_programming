#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: pointer to a string, as the destination string too
 * @src: pointer to a string.
 *
 * Return: return a pointer to a string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (*(dest + i) != '\0')
		++i;
	for (j = 0; *(src + j) != '\0'; ++j)
	{
		*(dest + i) = *(src + j);
		++i; 
	}
	*(dest + i) = '\0';
	return (dest);
}

