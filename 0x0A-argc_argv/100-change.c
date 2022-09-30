#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints the minimum number of coins to make change for
 * an amount of money. if the number of arguments passed to your program is not
 * exactly 1, print Error, followed by a new line, and return 1. If the number
 * passed as the argument is negative, print 0, followed by a new line. You can
 * use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent.
 * @argc: the number of arguments passed to main
 * @argv: an array of arguments passed to main
 *
 * Return: return 0 on success, and 1 otherwise
 */
int main(int argc, char *argv[])
{
	int num, result, i;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) <= 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		num =  atoi(argv[1]);
		result = num;

		for (i = 0; result != 0; ++i)
		{
			result -= closest_to(result);
		}
		printf("%d\n", i);
		return (0);
	}
}
/**
 * closest_to - a function that accepts a number returns the closet number to
 * it from 1,2,5,10,25
 * @a: the number
 *
 * Return: return the closest number to a as int
 */
int closest_to(int a)
{
	int i;
	int arr[6] = {1, 2, 5, 10, 25};

	for (i = 0; i <= 4; ++i)
	{
		if ((a - arr[i]) < 0)
		{
			return (arr[i - 1]);
		}
	}
	return (arr[i - 1]);
}
