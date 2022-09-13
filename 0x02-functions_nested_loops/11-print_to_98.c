#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers from n to 98,
 * followed by a new line.
 * @i: starting point.
 */
void print_to_98(int i)
{
	if (i < 98)
	{
		for (; (i <= 98); ++i)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else if (i > 98)
	{
		for (; (i >= 98); --i)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		printf("%d", i);
	}
	printf("\n");
}
