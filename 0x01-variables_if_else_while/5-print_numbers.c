#include <stdio.h>
/**
 * main - Write a program
 * that prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: return int 0 on successful completion
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
