#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * The array created should contain all the values from min (included) to max
 * (included), ordered from min to max Return: the pointer to the newly created
 * array. If min > max, return NULL If malloc fails, return NULL
 * @min: the minimum value the array should contain
 * @max: the maximum value the array should contain
 *
 * Return: a pointer to the array of integers
 */

int *array_range(int min, int max)
{

	int *ptr;
	int count, cnt;

	if (min > max)
		return (NULL);

	cnt = max - min + 1;

	ptr = malloc(sizeof(int) * cnt);

	if (ptr == NULL)
		return (NULL);

	for (count = 0; count < cnt; count++)
	{
		*(ptr + count) = min;
		min++;
	}

	return (ptr);
}
