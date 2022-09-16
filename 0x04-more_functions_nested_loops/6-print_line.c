#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 * You can only use _putchar function to print
 * Where n is the number of times the character _ should be printed
 * The line should end with a new line
 * If n is 0 or less, the function should only print new line
 * @n: the number of _ character to print
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; ++i)
		_putchar('_');
	_putchar('\n');
}
