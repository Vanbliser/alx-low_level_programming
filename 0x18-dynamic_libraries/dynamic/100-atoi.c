#include "main.h"

/**
 * char_to_int - a function that converts a character type number to an
 * integer type number
 * @i: the character type number
 *
 * Return: integer type number
 */
int char_to_int(char i)
{
	int ans;

	switch (i)
	{
	case '0':
		ans = 0;
		break;
	case '1':
		ans = 1;
		break;
	case '2':
		ans = 2;
		break;
	case '3':
		ans = 3;
		break;
	case '4':
		ans = 4;
		break;
	case '5':
		ans = 5;
		break;
	case '6':
		ans = 6;
		break;
	case '7':
		ans = 7;
		break;
	case '8':
		ans = 8;
		break;
	case '9':
		ans = 9;
		break;
	}
	return (ans);
}

/**
 * _atoi -  a function that convert a string to an integer.
 * @s: the string to be converted
 *
 * Return: Return the converted integer
 */
int _atoi(char *s)
{
	int i;
	int j = 0;
	unsigned int ans = 0;
	int sign = 1;
	char c;

	for (i = 0; *(s + i) != '\0'; ++i)
	{
		c = *(s + i);
		if (c == 45)
			sign = sign * -1;
		if (c == 43)
			sign = sign * 1;
		if ((j > 0) && (c == ' ' || c == '	'))
			break;
		if (c >= 48 && c <= 57)
		{
			while (c >= 48 && c <= 57)
			{
				ans = (ans * 10) + char_to_int(c);
				c = *(s + ++i);
			}
			break;
		}
		if (c == '\0')
			return (0);
	}
	return (sign * ans);
}
