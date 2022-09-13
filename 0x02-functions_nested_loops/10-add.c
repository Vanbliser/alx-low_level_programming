#include "main.h"
#include <stdio.h>

/**
 * add - a function that adds two integers and returns the result.
 * @i: the first integer
 * @j: the second integer
 *
 * Return: Returns the addition as an int
 */
int add(int i, int j)
{
	long int a, b;

	a = (long int)(i);
	b = (long int)(j);
	return ((int)(a + b));
}
