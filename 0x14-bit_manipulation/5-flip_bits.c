#include "main.h"
#include <stdio.h>
/**
 * count_set_bits - set bits in the XOR
 * @n: result of XOR
 * Return: count
 */


int count_set_bits(int n)
{
	int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}

