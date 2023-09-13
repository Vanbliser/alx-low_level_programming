#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: return the index where value is located. If value is not present
 * in array or if array is NULL, your function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, L, R, M;

	if (array != NULL && size > 0)
	{
		L = 0;
		R = size - 1;
		do {
			printf("Searching in array: ");
			for (i = L; i < R; ++i)
				printf("%d, ", array[i]);
			printf("%d\n", array[i]);

			M = (size_t)((int)((L + R) / 2));

			if (array[M] == value)
				return (M);
			if (array[M] < value)
				L = M + 1;
			else
				R = M - 1;

		} while (L <= R);
	}
	return (-1);
}
