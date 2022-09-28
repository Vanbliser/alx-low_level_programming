#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural square root of a
 * number If n does not have a natural square root,
 * the function should return -1
 * @n: the number
 *
 * Return: return the result as int
 */
int _sqrt_recursion(int n)
{
	return (double_up(1, n));
}
/**
 * double_up - a function that returns the square root of k
 * @n: an integer that starts at 1 and increments by 1
 * until its value is k when it is multiplied by itself
 * @k: the Number
 *
 * Return: return the natural square root, else return -1
 */
int double_up(int n, int k)
{
	int x = n * n;

	if (x == k)
	{
		return (n);
	}
	else if (x > k)
	{
		return (-1);
	}
	else
	{
		n++;
		return (double_up(n, k));
	}
}
