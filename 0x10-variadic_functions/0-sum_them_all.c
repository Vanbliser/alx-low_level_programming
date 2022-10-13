#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of parameters passed.
 *
 * Return: returns the sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int index;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (index = 0; index < n; ++index)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
