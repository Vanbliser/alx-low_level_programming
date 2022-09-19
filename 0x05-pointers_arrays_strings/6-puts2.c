#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: the string
 */
void puts2(char *str)
{
	int i;
	char c;

	for (i = 0; *(str + i) != '\0'; ++i)
	{
		c = *(str + i);
		if (i % 2 == 0)
			_putchar(c);
	}
	_putchar('\n');
}
