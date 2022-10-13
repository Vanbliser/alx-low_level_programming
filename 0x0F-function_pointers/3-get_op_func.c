#include "3-calc.h"
/**
 * get_op_func - function that selects the correct function to perform the
 * operation asked by the user. You are not allowed to use switch statements
 * You are not allowed to use for or do ... while loops You are not allowed to
 * use goto. You are not allowed to use else. You are not allowed to use more
 * than one if statement in your code. You are not allowed to use more than
 * one while loop in your code
 * @s: is the operator passed as argument to the program
 *
 * Return: Returns the function and the operator when equal
**/
int (*get_op_func(char *s))(int, int)
{
	int index = 0;
	op_t ops[7] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul}, {"/", op_div},
		{"%", op_mod}, {NULL, NULL}};

	while (ops[index].op != NULL)
	{
		if (!strcmp(ops[index].op, s))
			return (ops[index].f);
		index++;
	}

	return (NULL);
}
