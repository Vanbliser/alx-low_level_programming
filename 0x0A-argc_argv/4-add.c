#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a program that adds positive numbers. Print the result, followed by a
 * new line. If no number is passed to the program, print 0, followed by a new
 * line. If one of the number contains symbols that are not digits, print Error
 * followed by a new line, and return 1. You can assume that numbers and the
 * addition of all the numbers can be stored in an int.
 * @argc: the number of arguments passed
 * @argv: the list of all arguments passed
 *
 * Return: return 0 on success.
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; ++i)
		{
			if (is_int(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
/**
 * is_int - a function that checks if a string is an integer
 * @str: the string
 *
 * Return: return 1 if a character, and 0 otherwise
 */
int is_int(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; ++i)
	{
		if (!(*(str + i) >= '0' && *(str + i) <= '9'))
			return (0);
	}
	return (1);
}
