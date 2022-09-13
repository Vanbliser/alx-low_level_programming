#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * Prototype: int print_last_digit(int);
 * @i: the digit
 *
 * Return: Returns the value of the last digit
 */
int print_last_digit(int i)
{
	long int j = (long int)(i);
	int mod;

	if (j < 0)
		j *= -1;
	mod = (int)(j % 10);
	_putchar(48 + mod);
	return (mod);
}
