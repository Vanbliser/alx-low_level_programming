#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: a pointer
 * @size: a integer
 */
void print_diagsums(int *a, int size)
{
    unsigned int diag1 = size + 1;
	unsigned int diag2 = size - 1;
	unsigned int i;
	int count = 1;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; count++ <= size; i += diag1)
		sum1 += *(a + i);
	printf("%d, ", sum1);
	count = 1;
	for (i = diag2; count++ <= size; i += diag2)
		sum2 += *(a + i);
	printf("%d\n", sum2);
}
