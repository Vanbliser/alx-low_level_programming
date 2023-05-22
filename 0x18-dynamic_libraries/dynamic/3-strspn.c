#include "main.h"

/**
 * is_present - a function that checks if a character is preset in a string
 * @str: the string
 * @a: the character
 *
 * Return: return unsigned int 1 if present, else return 0
 */
unsigned int is_present(char *str, char a)
{
	int i;

	for (i = 0; *(str + i) != '\0'; ++i)
	{
		if (a == *(str + i))
			return (1);
	}
	return (0);
}

/**
 * is_complete - a function that checks if all characters in the string st is
 * present in the string str
 * @str: the string
 * @st: the substring
 *
 * Return: 1 if present. 0 otherwise.
 */
unsigned int is_complete(char *str, char *st)
{
	int i;

	for (i = 0; *(st + i) != '\0'; ++i)
		if (!(is_present(str, *(st + i))))
			return (0);
	return (1);
}

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: the string
 * @accept: the substring
 *
 * Return: the number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int cnt = 0;
	unsigned int sum = 0;
	char a[80] = "";

	for (i = 0; *(s + i) != '\0'; ++i)
	{
		if (is_present(accept, *(s + i)))
		{
			a[cnt] = *(s + i);
			++cnt;
		}
		else
		{
			if (cnt >= sum)
			{
				sum = cnt;
				a[cnt] = '\0';
				cnt = 0;
				if (is_complete(accept, a))
				{
					return (sum);
				}
			}
			else
			{
				cnt = 0;
			}
		}
	}
	return (sum);
}
