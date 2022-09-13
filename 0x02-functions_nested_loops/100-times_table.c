#include "main.h"

/**
 * print_times_table - Write a function that prints the n times table,
 * starting with 0. If n is greater than 15 or less than 0
 * the function should not print anything.
 * @n: n times table.
 */
void print_times_table(int n)
{
	int i, j, k, num;

	if ((n >= 0) && (n <= 15))
	{
		for (i = 0; i <= n; ++i)
		{
			for (j = 0; j <= n; ++j)
			{
				k = i * j;
				num = no_of_digit(k);
				if (j != 0)
					comma_space(num);
				print_digits(k, num);
			}
			_putchar('\n');
		}
	}
}

/**
 * print_digits - a function that prints the digits of a number
 * @d: the number
 * @n: the number of the digits in the number
 */
void print_digits(int d, int n)
{
	int digits[4];
	int tmp = d;
	int i;

	for (i = 0; i < n; ++i)
	{
		digits[i] = tmp % 10;
		tmp /= 10;
	}
	for (i = n - 1; i >= 0; --i)
	{
		_putchar('0' + digits[i]);
	}
}

/**
 * comma_space - print a sequence of comma and space character
 * @i: number of spaces to print.
 *
 * Description: the smaller the number the higher the space
 * up to 3. if number is 1, print 3 spaces. If 2, print 2 spaces.
 * and if 1, print 3 spaces.
 */
void comma_space(int i)
{
	if ((i > 0) && (i <= 3))
	{
		_putchar(',');
		for (; i <= 3; ++i)
		{
			_putchar(' ');
		}
	}
}
/**
 * no_of_digit - Return the number of digits in a number i
 *
 * @i: the number i
 * Return: return the number of digits as int
 */
int no_of_digit(int i)
{
	int a = 1;

	while (i >= 10)
	{
		i /= 10;
		++a;
	}
	return (a);
}
