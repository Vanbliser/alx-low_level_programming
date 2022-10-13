#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings, followed by a new line.
 * where separator is the string to be printed between the strings.
 * and n is the number of strings passed to the function. You are allowed to
 * use printf. If separator is NULL, don’t print it If one of the string is
 * NULL, print (nil) instead. Print a new line at the end of your function
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	unsigned int index;
	va_list args;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		string = va_arg(args, char *);

		if (!string)
			printf("(nil)");
		else
			printf("%s", string);

		if (index < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
