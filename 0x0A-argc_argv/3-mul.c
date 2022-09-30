#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * Your program should print the result of the multiplication, followed by a
 * new line. You can assume that the two numbers and result of the
 * multiplication can be stored in an integer. If the program does not receive
 * two arguments, your program should print Error, followed by a new line, and
 * return 1.
 * @argc: the number of arguments passed to the program
 * @argv: list of arguments passed as string
 *
 * Return: return 0 on success
 */
int main(int __attribute__ ((unused)) argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", atoi(*(argv + 1)) * atoi(*(argv + 2)));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
