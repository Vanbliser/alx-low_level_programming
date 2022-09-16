#include <stdio.h>
/**
 * main - a program that finds and prints the largest prime factor of the
 * number 612852475143, followed by a new line.
 *
 * Return: return 0 on success
 */
int main(void)
{
	long int i;
	long int j = 612852475143;
	long int prime, k, ans;

	for (i = 1; i <= j; ++i)
	{
		prime = 1;
		for (k = 2; k < i; ++k)
		{
			if (i % k == 0)
			{
				prime = 0;
				break;
			}
		}
		if (prime == 1)
		{
			if (j % i == 0)
			{
				ans = i;
			}
		}
	}
	printf("%lu\n", ans);
	return (0);
}
