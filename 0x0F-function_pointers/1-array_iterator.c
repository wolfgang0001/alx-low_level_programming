#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - functions given as a parameter on each element of an array
 * @array: array
 * @size: size of the array
 * @action: to be performed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
