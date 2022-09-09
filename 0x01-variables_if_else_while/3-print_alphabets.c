#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * Description: You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar three times in your code
 * Return: Return int 0 on successful completion
 */
int main(void)
{
	int a;
	int A;

	for (a = 'a'; a <= 'z'; ++a)
	{
		putchar(a);
	}
	for (A = 'A'; A <= 'Z'; ++A)
	{
		putchar(A);
	}
	putchar('\n');

	return (0);
}
