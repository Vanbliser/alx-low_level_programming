#include <stdio.h>
/**
 * main - a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * The numbers must be separated by comma, followed by a space
 *
 * Return: return 0 on success
 */
int main(void)
{
	int i;
	long int c;
	long int a = 0;
	long int b = 1;

	for (i = 1; i <= 50; ++i)
	{
		c = a + b;
		printf("%ld", c);
		if (i == 50)
			break;
		printf(", ");
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
