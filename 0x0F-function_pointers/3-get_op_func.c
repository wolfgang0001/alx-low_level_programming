#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - selecting correct function
 * @s: operators passed as argument to the program
 * Return: pointer for the correct fuction or null
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (0);
}
