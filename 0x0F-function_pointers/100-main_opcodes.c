#include <stdlib.h>
#include <stdio.h>
void opcode_printer(char *add, int nBytes);
/**
 * main - a program that prints the opcodes of the main function.
 * @argc: number of parameters passed to the program
 * @argv: array of pointers to the parameters passed to the program
 *
 * Return: returns 0 on success
 */
int main(int argc, char **argv)
{
	int intParam1;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	intParam1 = atoi(argv[1]);
	if (intParam1 < 0)
	{
		printf("Error\n");
		exit(2);
	}
	opcode_printer((char *)&main, intParam1);
	return (0);
}

/**
 * opcode_printer - a function that prints out the opcodes of the program
 * @addr: address of the main function
 * @nBytes: number of bytes to be printed
**/
void opcode_printer(char *addr, int nBytes)
{
	int i;

	for (i = 0; i < nBytes; i++)
	{
		printf("%.2hhx", addr[i]);
		if (i < nBytes - 1)
			printf(" ");
	}
	printf("\n");
}
