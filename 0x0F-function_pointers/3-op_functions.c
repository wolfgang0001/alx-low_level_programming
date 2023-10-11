#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - adding 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract  2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: differences of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 numbers
 * @a: 1 number
 * @b: 2 number
 * Return: result of division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the remnder of division of two numbers
 * @a: 1 number
 * @b: 2 number
 * Return: remainder of division of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
