#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
/**
 * main - runs the calculator
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 success
 */

int main(int argc, char  *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);

}
