#include <stdio.h>

/**
* main - Start of program execution
*
* Description: print the sizes of various types in C.
* Return: return int 0 on successful completion
*/
int main(void)
{
	char c;
	int i;
	long int a;
	long long int b;
	float f;

	printf("Size of a char: %d byte(s)\n", (int)sizeof(c));
	printf("Size of an int: %d byte(s)\n", (int)sizeof(i));
	printf("Size of a long int: %d byte(s)\n", (int)sizeof(a));
	printf("Size of a long long int: %d byte(s)\n", (int)sizeof(b));
	printf("Size of a float: %d byte(s)\n", (int)sizeof(f));
	return (0);
}
