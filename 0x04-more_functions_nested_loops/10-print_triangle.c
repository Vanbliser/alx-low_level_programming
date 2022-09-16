#include "main.h"
/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; ++i)
	{
		for (j = (size - i); j > 0 ; --j)
			_putchar(' ');
		for (k = 1; k <= i; ++k)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
