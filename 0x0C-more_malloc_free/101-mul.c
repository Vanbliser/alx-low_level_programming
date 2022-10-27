#include "main.h"
#include <stdlib.h>

/**
 * main - a program that multiplies two positive numbers.
 * Usage: mul num1 num2
 * num1 and num2 will be passed in base 10
 * Print the result, followed by a new line
 * If the number of arguments is incorrect, print Error,
 * followed by a new line, and exit with a status of 98
 * num1 and num2 should only be composed of digits. If not, print Error,
 * followed by a new line, and exit with a status of 98
 * You are allowed to use more than 5 functions in your file
 * @argc: the number of arguments passed to the program
 * @argv: an array containing the arguments passed to the program
 *
 * Return: return 0 on success
 */
int main(int argc, char **argv)
{
	unsigned int i, j, k, x, y, z, l1, l2, **pt1;
	char *int1, *int2;

	if (argc > 3 || argc < 3 || _is_not_digit(argv[1]) || _is_not_digit(argv[2]))
		error();

	l1 = length(argv[1]);
	l2 = length(argv[2]);
	int1 = (l1 >= l2) ? argv[1] : argv[2];
	int2 = (l1 >= l2) ? argv[2] : argv[1];
	l1 = length(int1);
	l2 = length(int2);
	x = l2 - 1;
	y = l1 - 1;
	k = l1 + l2;
	z = k;

	pt1 = malloc(sizeof(char *) * (l2 + 1));

	if (pt1 == NULL)
		return (1);

	for (i = 0; i <= l2; ++i)
	{
		*(pt1 + i) = calloc(l1 + l2 + 1, sizeof(unsigned int));
		if (*(pt1 + i) == NULL)
		{
			_free(pt1, i);
			return (1);
		}
	}

	for (i = 0; i < l2; ++i)
	{
		multiply(*(pt1 + i), l1, int1, int2, &x, &y, z);
		z--;
	}

	addition(pt1, k, l2);

	for (j = 0; j <= k; ++j)
		if (*(*(pt1 + l2) + j) != 0 || j == k)
			for (; j <= k; ++j)
				_putchar(_itoa(*(*(pt1 + l2) + j)));

	_putchar('\n');
	_free(pt1, l2);
	exit(0);
}
/**
 * _free - a function that frees all allocated memory stored in an array
 * and also frees the array memory
 * @pt1: the array
 * @i: index value of the elements of the array
 */
void _free(unsigned int **pt1, unsigned int i)
{
	int j;

	j = (int)(i);
	while (j >= 0)
	{
		free(*(pt1 + j--));
	}
	free(pt1);
	exit(0);
}
/**
 * addition - a function that accepts a an array of pointers pointing to an
 * array of unsigned integers
 * @pt1: the array of pointers
 * @k: the lenght of the array of unsigned integers
 * @l2: the length of the array of pointers, pt1
 */
void addition(unsigned int **pt1, unsigned int k, unsigned int l2)
{
	unsigned int i, j, l = k, ans, add = 0, rem = 0;

	for (i = 0; i <= k; ++i)
	{
		for (j = 0; j < l2; ++j)
		{
			add += *(*(pt1 + j) + l);
		}
		rem = add / 10;
		ans = add % 10;
		*(*(pt1 + j) + l) = ans;
		add = rem;
		l--;
	}
}
/**
 * multiply - a function that multiplies two arrays of unsigned integers
 * @ptr: an address to store the result
 * @l1: length of the first array
 * @int1: the first array
 * @int2: the second array
 * @x: index of the second array
 * @y: index of the first array
 * @z: index of the array to store to result of the individual multiplication
 */
void multiply(unsigned int *ptr, unsigned  int l1,
char *int1, char *int2, unsigned int *x, unsigned int *y,
unsigned int z)
{
	unsigned int i, mul, val, rem = 0;

	for (i = 1; i <= l1; ++i)
	{
		mul = (_atoi(int2[*x]) * _atoi(int1[*y])) + rem;
		rem = mul / 10;
		val = mul % 10;
		*(ptr + z--) = val;
		--*y;
	}
	*(ptr + z) = rem;
	--*x;
	*y = l1 - 1;
}
/**
 * error - a function that prints Error followed by a new line
 */
void error(void)
{
	char error[6] = "Error";
	unsigned int i;

	for (i = 0; *(error + i) != '\0'; ++i)
		_putchar(error[i]);
	_putchar('\n');
	exit(98);
}
/**
 * _is_not_digit - a function that checks the content of an array
 * and returns 0 if all are integers, else return 1
 * @str: the array to be checked
 *
 * Return: returns 0 if all are integers, else return 1
 */
unsigned int _is_not_digit(char *str)
{
	unsigned int i;

	for (i = 0; *(str + i) != '\0'; ++i)
		if (!(*(str + i) >= 48 && *(str + i) <= 57))
			return (1);

	return (0);
}
/**
 * length - a function that returns the length of an array
 * @str: the array
 *
 * Return: returns the length
 */
unsigned int length(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; ++i)
	;
	return (i);
}
/**
 * _atoi - a function that converts an integer of type char into an integer of
 * type unsigned int
 * @ch: the integer of type char
 *
 * Return: returns the integer of type unsigned int
 */
unsigned int _atoi(char ch)
{
	char cha[10] = "0123456789";
	int chi[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, i;

	for (i = 0; i <= 8; ++i)
		if (ch == cha[i])
			return (chi[i]);

	return (9);
}
/**
 * _itoa - a function that converts an integer into an integer of
 * type char
 * @ch: the integer to be converted
 *
 * Return: returns the integer of type char
 */
char _itoa(unsigned int ch)
{
	char cha[10] = "0123456789";
	unsigned int chi[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, i;

	for (i = 0; i <= 8; ++i)
		if (ch == chi[i])
			return (cha[i]);

	return (cha[i]);
}
