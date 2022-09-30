#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints all arguments it receives.
 * All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
 * @argc: no of attribute
 * @argv: list of arguments passed as string
 *
 * Return: Return 0 on success
 */
int main(int argc, char __attribute__ ((unused)) **argv)
{
	int i;

	for (i = 0; i < argc; ++i)
	{
		printf("%s\n", *(argv + i));
	}
	return (0);
}
