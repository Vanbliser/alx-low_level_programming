#include <stdio.h>

/**
 * main - a program that computes and prints the sum of all
 * the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
 *
 * Description: If we list all the natural numbers below 10 that are
 * multiples of 3 or 5, we get 3, 5, 6 and 9.
 * The sum of these multiples is 23.
 * Return: return 0 on success.
 */
int main(void)
{
	int i;
	int add = 0;

	for (i = 1; i < 1024; ++i)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			add += i;
	}
	printf("%d\n", add);
	return (0);
}
