#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: the string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		char a = *s;

		_putchar(a);
		s++;
		_puts_recursion(s);
	}
}
