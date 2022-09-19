#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: the string
 * @n: the number of elements to prints.
 */
void print_array(int *a, int n)
{
	int i;
	int c;

	for (i = 0; i < n; ++i)
	{
		c = *(a + i);
		printf("%d", c);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
