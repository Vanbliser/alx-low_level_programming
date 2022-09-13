#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 * from 97 to 122
 * @c: The char variable to check in int.
 *
 * Return: return int 1 if true, else int 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
