#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * where b is pointing to a string of 0 and 1 chars
 * @b: a string of binary digits
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, len = 0, i;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] >= '2' && b[len] <= '9')
			return (0);
		len++;
	}
	/* Recall that 1 << 4 === 1 * 2^4 && 0 << 4 === 0 * 2^4 === 0 */
	for (i = 0; i < len; ++i)
		result += (((b[i] == '0') ? 0 : 1)  <<  (len - (i + 1)));

	return (result);
}

