#include "main.h"
/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: the input integer
 *
 * Return: Returns 1 if it's a prime number
 */
int is_prime_number(int n)
{
	return (_prime(2, n));
}
/**
 * _prime - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: divisor starting at 2 and incrementing at each recursion
 * @k: the number
 *
 * Return: int 1 or 0
 */
int _prime(int n, int k)
{
	if ((k != n) && (k <= 1 || k % n == 0))
	{
		return (0);
	}
	else if (k == n)
	{
		return (1);
	}
	else
	{
		++n;
		return (_prime(n, k));
	}
}
