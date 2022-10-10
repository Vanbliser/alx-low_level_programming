#include "main.h"

/**
 * _isalpha - Write a function that checks for alphabetic character.
 * Prototype: int _isalpha(int c);
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 * @c: the character to check
 *
 * Return: int 1 if true, else int 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
