#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need to
 * flip to get from one number to another.
 * You are not allowed to use the % or / operators
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits you would need to flip to get from one number to
 * another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits_count = 0;

	while (xor > 0)
	{
		bits_count += (xor & 1);
		xor >>= 1;
	}

	return (bits_count);
}

