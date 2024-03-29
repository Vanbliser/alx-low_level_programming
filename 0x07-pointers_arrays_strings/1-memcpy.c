#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: destination memory
 * @src: the source memory location
 * @n: number of byte to copy
 *
 * Return: the memory destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

