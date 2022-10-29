#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * where index is the index, starting from 0 of the bit you want to set
 * @n: a digit
 * @index: the index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index < 32)
	{
		a = 1 << index;
		*n = *n & (~a);
		return (1);
	}
	else
	{
		return (-1);
	}
}

