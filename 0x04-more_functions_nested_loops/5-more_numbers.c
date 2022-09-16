#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 * You can only use _putchar three times in your code
 */
void more_numbers(void)
{
	int i, j;
	int l = 0;

	for (i = 1; i <= 10; ++i)
	{
		for (j = 0; j <= 14; ++j)
		{
			if (j > 9)
			{
				l = 10;
				_putchar('1');
			}
			_putchar('0' + (j - l));
		}
		l = 0;
		_putchar('\n');
	}
}
