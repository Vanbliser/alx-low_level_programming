#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
        if (argc > 3 || argc < 3 || _is_not_digit(argv[1]) || _is_not_digit(argv[2]))
                error();
	printf("%s\n%s\n",argv[1],argv[2]);
	return (0);	
}


/**
 * error - a function that prints Error followed by a new line
 */
void error(void)
{
	printf("Error\n");
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

