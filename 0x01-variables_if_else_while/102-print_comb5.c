#include <stdio.h>
void change_state(int, int *th, int *_xx, int);

/**
 * main - Write a program that prints all possible combinations
 * of two two-digit numbers.
 *
 * Description: The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * The combination of numbers must be separated by comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * 00 01 & 01 00 are considered as the same combination of the numbers 0 & 1
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar eight times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: Return int 0 on successful completion
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;
	int _99 = 49;
	int _999 = 48;
	int lth = 49;
	int kth = 48;
	int boolean;
	int is_lth = 1;
	int is_not_lth = 0;

	for (i = 48; i <= 57; ++i)
	{
		for (j = 48; j <= 57; ++j)
		{
			for (k = kth; k <= 57; ++k)
			{
				for (l = lth; l <= 57; ++l)
				{
					putchar((char)(i));
					putchar((char)(j));
					putchar(' ');
					putchar((char)(k));
					putchar((char)(l));
					if ((i == 57) && (j == 56) && (k == 57) && (l == 57))
						break;
					putchar(',');
					putchar(' ');
				}
				boolean = (k >= 57) && (l >= 57) && (_99 <= 57);
				change_state(boolean, &lth, &_99, is_lth);
				if ((i == 57) && (j == 56) && (k == 57) && (l == 57))
					break;
			}
			boolean = (j >= 57) && (k >= 57) && (l >= 57) && (_999 <= 57);
			change_state(boolean, &kth, &_999, is_not_lth);
			if ((i == 57) && (j == 56) && (k == 57) && (l == 57))
				break;
		}
		if ((i == 57) && (j == 56) && (k == 57) && (l == 57))
			break;
	}
	putchar('\n');
	return (0);
}

/**
 * change_state - a function that sets the th value and the _xx
 * in the calling function
 * @bool: the bolean value of a boolean expression
 * @th: the pointer to the th value in the calling function
 * @_xx: the pointer to the _xx value in the calling function
 * @is_lth: checks if the function is setting lth or kth
 *
 * Return: return void
 */
void change_state(int bool, int *th, int *_xx, int is_lth)
{
	if (bool == 1)
	{
		*th = ++*_xx;
	}
	else
	{
		if (is_lth)
			*th = 48;
		if (*_xx > 57)
			*_xx = 48;
	}
}
