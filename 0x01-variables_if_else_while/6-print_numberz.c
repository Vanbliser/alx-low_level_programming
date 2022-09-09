#include <stdio.h>

/**
 * main - write a program that prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 *
 * Description: You are not allowed to use any variable of type char
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar twice in your code
 * All your code should be in the main function
 * Return: Return int 0 on successful completion.
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; ++i)
	{
		putchar((char)(i));
	}
	putchar('\n');
	return (0);
}
