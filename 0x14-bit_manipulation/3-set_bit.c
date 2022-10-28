#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * where index is the index, starting from 0 of the bit you want to set
 * @n: pointer the digit
 * @index: the index of the digit to set
 *
 * Return: return 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a = 1 << index;
	*n = *n | a;
	if (*n == 0)
		return (-1);
	else
		return (1);
}

