#include "main.h"

/**
 * print_alphabet_x10 - Write a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 * Description: Prototype: void print_alphabet_x10(void);
 * You can only use _putchar twice in your code
 */
void print_alphabet_x10(void)
{
	int i;
	char a;

	for (i = 1; i <= 10; ++i)
	{
		for (a = 'a'; a <= 'z'; ++a)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
