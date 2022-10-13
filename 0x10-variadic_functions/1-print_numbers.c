#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * where separator is the string to be printed between numbers
 * and n is the number of integers passed to the function.
 * You are allowed to use printf. If separator is NULL, don’t print it.
 * Print a new line at the end of your function
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int index;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(args, int));
		if (separator && index < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
