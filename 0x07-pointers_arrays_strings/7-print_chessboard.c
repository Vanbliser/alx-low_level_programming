#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - a function that prints the chessboard.
 * @a: a pointer to the first element in the multidimentaional array
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, j;
	char ch;

	for (i = 0; i < 8; ++i)
	{
		for (j = 0; j < 8; ++j)
		{
			ch = *(*(a + i) + j);
			_putchar(ch);
		}
		_putchar('\n');
	}
}
