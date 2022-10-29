#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: a decimal digit
 * @index: the index
 * Description: where index is the index, starting from 0 of the bit you
 * want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int __attribute__ ((unused)) a;
	unsigned long int i = 0;

	i = ~i;
	if (n <= i && index <= 63)
	{
		a = (unsigned long int)(1) << index;

		if ((n & a) == 0)
			return (0);
		else
			return (1);
	}
	else
	{
		return (-1);
	}
}

