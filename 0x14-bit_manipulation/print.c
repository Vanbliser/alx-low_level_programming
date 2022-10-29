#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: the number
 * Description: You are not allowed to use arrays,
 * You are not allowed to use malloc
 * You are not allowed to use the % or / operators
 */
void print_binary(unsigned long int n)
{
	unsigned long __attribute__ ((unused)) i, old_start, new_start, sum;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		for (i = 1; i <= n; i *= 2)
			new_start = i;
		_putchar('1');
		sum = new_start;
		while (new_start > 1)
		{
			old_start = new_start;
			for (i = 1; i < old_start; i *= 2)
				new_start = i;
			if ((sum + new_start) <= n)
			{
				_putchar('1');
				sum += new_start;
			}
			else
			{
				_putchar('0');
			}
		}
	}
}

