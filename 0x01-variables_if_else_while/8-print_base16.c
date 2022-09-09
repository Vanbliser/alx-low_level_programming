#include <stdio.h>

/**
 * main - Write a program that prints all the
 * numbers of base 16 in lowercase, followed by a new line.
 *
 * Description: You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar three times in your code
 * Return: Return int 0 on successful completion
 */
int main(void)
{
	char a;
	char i;

	for (i = '0'; i <= '9'; ++i)
	{
		putchar(i);
	}
	for (a = 'a'; a <= 'f'; ++a)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
