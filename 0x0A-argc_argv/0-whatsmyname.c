#include "main.h"
#include <stdio.h>
/**
 * main - A program that prints its name, followed by a new line
 * If you rename the program, it will print the new name,
 * without having to compile it again
 * You should not remove the path before the name of the program
 * @argc: the number of arguments passed to main
 * @argv: the list of strings arguments to be printed.
 * Return: return 0 un success.
 */
int main(int argc __attribute__ ((unused)), char **argv)
{
	printf("%s\n", *(argv + 0));
	return (0);
}
