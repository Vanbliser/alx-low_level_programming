#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Description: You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar twice in your code
 * Return: Return int 0 on successful completion
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; ++a)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
