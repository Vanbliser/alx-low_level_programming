#include "main.h"
#include <stdio.h>
/**
 * main - Your program should print a number, followed by a new line
 * @argc: the number of arguments passed to main
 * @argv: the list of strings arguments to be printed.
 *
 * Return: return 0 un success.
 */
int main(int argc, char __attribute__ ((unused)) **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
