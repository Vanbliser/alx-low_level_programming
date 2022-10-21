#include <stdio.h>

void startUpFunc (void) __attribute__ ((constructor));

/**
 * startUpFunc - check the code
 *
 * Return: Always 0.
 */
void startUpFunc(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

