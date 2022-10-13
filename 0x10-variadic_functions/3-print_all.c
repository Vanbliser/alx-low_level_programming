#include "variadic_functions.h"
/**
 * print_all - a function that prints anything.
 * where format is a list of types of arguments passed to the function
 * @format: a list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int index1 = 0, index2, flag = 0;
	const char arg_types[] = "cifs";

	va_start(args, format);
	while (format && format[index1])
	{
		index2 = 0;
		while (arg_types[index2])
		{
			if (format[index1] == arg_types[index2] && flag)
			{
				printf(", ");
				break;
			} index2++;
		}
		switching(format[index1], &flag, args);
		index1++;
	}
	printf("\n"), va_end(args);
}
/**
 * switching - a helper function to switch amoung the list of types
 * @format: a list of types of arguments passed to the function.
 * @c: A flag
 * @args: A va_list variable
 */
void switching(char format, unsigned int *c, va_list args)
{
	char *str;

	switch (format)
	{
		case 'c':
			printf("%c", va_arg(args, int)), *c = 1;
			break;
		case 'i':
			printf("%d", va_arg(args, int)), *c = 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double)), *c = 1;
			break;
		case 's':
			str = va_arg(args, char *), *c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
	}
}
