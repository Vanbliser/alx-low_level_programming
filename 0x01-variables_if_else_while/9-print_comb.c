#include <stdio.h>

/**
 * main - Write a program that prints all possible combinations
 * of single-digit numbers.
 *
 * Description: Numbers must be separated by , followed by a space
 * Numbers should be printed in ascending order
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar four times maximum in your code
 * You are not allowed to use any variable of type char
 * Return: Return int 0 on successful completion
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; ++i)
	{
		putchar((char)(i));

		if (i == 57)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
