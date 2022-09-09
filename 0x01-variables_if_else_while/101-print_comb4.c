#include <stdio.h>

/**
 * main - Write a program that prints all possible
 * different combinations of three digits.
 *
 * Description: Numbers must be separated by ,, followed by a space
 * The three digits must be different 012, 120, 102, 021, 201, 210
 * are considered the same combination of the three digits 0, 1 and 2
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar six times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: Return int 0 on successful completion
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 55; ++i)
	{
		for (j = i + 1; j <= 56; ++j)
		{
			for (k = j + 1; k <= 57; ++k)
			{
				putchar((char)(i));
				putchar((char)(j));
				putchar((char)(k));
				if (i == 55 && j == 56 && k == 57)
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
