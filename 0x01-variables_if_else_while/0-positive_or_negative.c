#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Start of the program execution
 *
 * Description: This program will assign a
 * random number to the variable n each time it is executed.
 * Return: return 0 on successful completion
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
