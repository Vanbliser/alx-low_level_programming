#include <stdio.h>

/**
 * main - Write a program that prints the lowercase
 * alphabet in reverse, followed by a new line.
 *
 * Description: You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar twice in your code
 * Return: returns int 0 on successful completion
 */
int main(void)
{
	char z;

	for (z = 'z'; z >= 'a'; --z)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
