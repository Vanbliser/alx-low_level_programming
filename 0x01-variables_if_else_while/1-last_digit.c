#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Start of the program execution
 *
 * Description: This program will assign a random number
 * to the variable n each time it is executed and
 * print the last digit of the number stored in the variable n.
 * Return: return 0 on successful completion
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	printf("Last digit of %d is %d ", n, a);
	if (a > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (a == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
