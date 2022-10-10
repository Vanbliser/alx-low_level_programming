#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	char a, b, c, d;

	for (a = '0'; a <= '2'; ++a)
	{
		for (b = '0'; b <= '9'; ++b)
		{
			for (c = '0'; c <= '5'; ++c)
			{
				for (d = '0'; d <= '9'; ++d)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
					if ((a == '2') && (b == '3') && (c == '5') && (d == '9'))
						b = '9';
				}
			}
		}
	}
}
