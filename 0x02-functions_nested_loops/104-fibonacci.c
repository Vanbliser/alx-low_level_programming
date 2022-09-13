#include "main.h"
/**
 * main - a program that prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * The numbers must be separated by comma, followed by a space
 *
 * Description: You are allowed to use the standard library
 * You are not allowed to use any other library (You can’t use GMP etc…)
 * You are not allowed to use long long, malloc, pointers, arrays/tables,
 * or structures
 * You are not allowed to hard code any Fibonacci number (except for 1 and 2)
 * Return: return 0 on success
 */
int main(void)
{
	int start;
	unsigned long number;
	int end = 98;
	unsigned long a = 0;
	unsigned long b = 1;

	for (start = 1; start <= end; ++start)
	{
		number = a + b;
		if ((a > 99999999) && (b > 99999999))
		{
			print_number(number);
			if (start == end)
				break;
			_putchar(',');
			_putchar(' ');

			start = long_int_split(b, number, end, ++start);
		}
		else
		{
			print_number(number);
			if (start == end)
				break;
			_putchar(',');
			_putchar(' ');
			a = b;
			b = number;
		}
	}
	_putchar('\n');
	return (0);
}
/**
 * long_int_split - a function that takes in two 18digit long int
 * and splits them into 9digits each for effective computation
 * @i: the first long integer.
 * @j: the second long integer.
 * @end: the last number of the series
 * @start: the first number of the series
 *
 * Description: This is a function that takes care of integer addition and
 * printing, of integers that are up to 18digits.
 * Return: return 0 on success.
 */
int long_int_split(unsigned long i, unsigned long j, int end, int start)
{
	unsigned long i1, i2, i3, j1, j2, j3, ans1, ans2, ans3, _ans, _i, _j, p;
	int div = 100000000;
	int rem = 0;
	int count = 0;
	int tmp = 0;
	int zero = 0;

	i1 = 0;
	i2 = i / div;
	i3 = i - (i2 * div);
	j1 = 0;
	j2 = j / div;
	j3 = j - (j2 * div);
	ans1 = 0;
	ans2 = 0;
	ans3 = 0;

	_ans = 0;
	_i = 0;
	_j = 0;
	p = 0;

	start = get_numbers(i1, i2, i3, j1, j2, j3, ans1, ans2, ans3, _ans,
	 _i, _j, p, div, rem, count, tmp, zero, end, start);
	return (start);
}

int get_numbers(unsigned long i1, unsigned long i2, unsigned long i3,
unsigned long j1, unsigned long j2, unsigned long j3, unsigned long ans1,
unsigned long ans2, unsigned long ans3, unsigned long _ans, unsigned long _i,
unsigned long _j, unsigned long p, int div, int rem, int count, int tmp,
int zero, int end, int start)
{
	for (; start <= end; ++start)
	{
		_i = i3;
		_j = j3;
		for (count = 1; count <= 3; ++count)
		{
			_ans = _i + _j + rem;
			rem = _ans / div;
			_ans = ((rem > 0) && (count != 3)) ? _ans - (rem * div) : _ans;
			ans3 = (count == 1) ? _ans : ans3;
			_i = (count == 1) ? i2 : _i;
			_j = (count == 1) ? j2 : _j;
			ans2 = (count == 2) ? _ans : ans2;
			_i = (count == 2) ? i1 : _i;
			_j = (count == 2) ? j1 : _j;
			ans1 = (count == 3) ? _ans : ans1;
		} (ans1 > 0) ? print_number(ans1) : 0;
		for (count = 1; count <= 2; ++count)
		{
			p = (count == 1) ? ans2 : ans3;
			if (((count == 1) && (ans1 != 0)) || (count == 2))
			{
				if (p > 0 && p < 10000000)
					for (tmp = power_num_dig(p, 0, 0, 2); tmp < 8; ++tmp)
						_putchar('0');
				if (p == 0)
					for (zero = 1; zero <= 5; ++zero)
						_putchar('0');
			} print_number(p);
		} (start != end) ? _putchar(',') : 0;
		(start != end) ? _putchar(' ') : 0;
		i1 = j1;
		i2 = j2;
		i3 = j3;
		j1 = ans1;
		j2 = ans2;
		j3 = ans3;
	} return (start);
}

/**
 * print_number - a function that prints the digits of a number
 * @number: the number
 *
 * Description: a function that prints the digits of a number
 * by receiving the number as an unsigned long int breaking it
 * down by 10th remainder.
 * Return: return 0 on success.
 */
int print_number(unsigned long number)
{
	unsigned long tmp;
	unsigned long ten = 10;
	int i, j, no;
	int k = 0;
	unsigned long a;

	tmp = number;
	do {
		++k;
		i = 0;
		while (tmp >= ten)
		{
			++i;
			tmp /= ten;
		}
		if (k == 1)
			j = i;
		_putchar('0' + (int)(tmp));
		a = tmp * power_num_dig(0, 10, i, 1);
		tmp = number - a;
		no = power_num_dig(tmp, 0, 0, 2);
		while (!((j == no) || (j + 1 == no)))
		{
			_putchar('0');
			--j;
		}
		number = tmp;
	} while (j-- > 0);
	return (0);
}

/**
 * power_num_dig - a function that find the value of base a
 * exponent b and the number of digits in a number i
 * @i: the number i
 * @a: base
 * @b: exponent
 * @bool: determine what to return - number of digits or power
 *
 * Return: return the number of digits or the power as int
 */
int power_num_dig(unsigned long i, int a, int b, int bool)
{
	if (bool == 2)
	{
		int cnt = 1;

		for (cnt = 1; i >= 10; ++cnt)
			i /= 10;
		return (cnt);
	}
	else
	{
		int cnt;
		int ans = 1;

		for (cnt = 1; cnt <= b; ++cnt)
			ans = ans * a;
		return (ans);
	}
}
