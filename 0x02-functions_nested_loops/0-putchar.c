#include "main.h"

/**
 * main -  a program that prints _putchar, followed by a new line.
 *
 * Return: return 0 if successful
 */
int main(void)
{
	char arr[] = "_putchar\n";
	int i = 0;

	while (arr[i])
	{
		_putchar(arr[i++]);
	}
	return (0);
}

