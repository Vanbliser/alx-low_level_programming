#include "main.h"
#include <stdio.h>

/**
 * _abs - Write a function that computes the absolute value of an integer.
 * Prototype: int _abs(int);
 * @c: the integer
 *
 * Return: ruturns its absolute value
 */
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
