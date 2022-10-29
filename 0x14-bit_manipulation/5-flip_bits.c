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
	unsigned long __attribute__ ((unused)) i, old_start, new_start, sum;
	unsigned long int a = n ^ m;
	unsigned int count = 0;

	if (a == 0)
	{
		return (count);
	}
	else
	{
		for (i = 1; i <= n; i *= 2)
			new_start = i;
		count++;
		sum = new_start;
		while (new_start > 1)
		{
			old_start = new_start;
			for (i = 1; i < old_start; i *= 2)
				new_start = i;
			if ((sum + new_start) <= a)
			{
				count++;
				sum += new_start;
			}
		}
		return (count);
	}
}

