#include "main.h"

/**
 * main - a program that finds and prints the sum of the even-valued terms,
 * of the fibbonaci numbers not above 4,000,000 followed by a new line.
 *
 * Return: return 0 on success
 */
int main(void)
{
	int i = 1;
	int c = 1;
	int a = 1;
	int b = 1;
	long int sum = 0;
	int count;

	while (c <= 4000000)
	{
		if ((c % 2) == 0)
			sum += c;
		a = b;
		b = c;
		c = a + b;
		++i;
	}
	count = no_of_digit(sum);
	print_digits(sum, count);
	return (0);
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

/**
 * print_digits - a function that prints the digits of a number
 * @d: the number
 * @n: the number of the digits in the number
 */
void print_digits(int d, int n)
{
	int digits[32];
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
	_putchar('\n');
}
