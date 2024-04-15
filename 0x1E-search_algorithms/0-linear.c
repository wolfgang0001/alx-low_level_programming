#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search - searching for a value in an array of
 * integers using the Linear search algorithm
 * @array: the array in which the value will be searched
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: the index of the value found,
 * or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
