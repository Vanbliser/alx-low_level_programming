#include "main.h"
#include <stdio.h>

/**
 * times_table - a function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			k = i * j;
			l = is_single(k);
			if (l)
			{
				if (j != 0)
					comma_space(l);
				_putchar('0' + k);
			}
			else
			{
				comma_space(l);
				_putchar('0' + first_digit(k));
				_putchar('0' + second_digit(k));
			}
		}
		_putchar('\n');
	}
}
/**
 * is_single - determine if an integer is single digit.
 * @i: the Integer to check
 *
 * Return: int i on true, and int 0 on false
 */
int is_single(int i)
{
	if (i >= 10)
		return (0);
	else
		return (1);
}

/**
 * comma_space - print a sequence of comma and space character
 * @i: a boolean value 0 or 1
 *
 * Description: if i is 0, print a sequence of one comma and two spaces
 * else, if i is 1, print a sequence of one comma and one space.
 */
void comma_space(int i)
{
	_putchar(',');
	if (i == 1)
	{
		_putchar(' ');
		_putchar(' ');
	}
	else
	{
		_putchar(' ');
	}
}
/**
 * first_digit - a function that returns the first digit of an integer
 * @i: the integer
 *
 * Return: the first digit of the integer in int.
 */
int first_digit(int i)
{
	long int a;

	a = (long int)(i);
	if (a >= 10)
	{
		do {
			a = a / 10;
		} while (a >= 10);
		return ((int)(a));
	}
	else
		return ((int)(a));
}

/**
 * second_digit - a function that returns the second digit
 * of an integer.
 * @i: the integer.
 *
 * Return: the second digit.
 */
int second_digit(int i)
{
	long int a;

	a = (long int)(i);
	a = a % 10;
	return ((int)(a));
}
