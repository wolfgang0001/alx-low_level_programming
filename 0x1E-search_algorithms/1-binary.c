#include "search_algos.h"
#include "stdio.h"

/**
  * binary_search - Searching for a value in a sorted array
  *                 of integers using binary search.
  * @array: the pointer to the first element of the array.
  * @size: the number of elements in the array.
  * @value: the given value to search for.
  *
  * Return: -1 if the value is not found or if the array is NULL.
  *         Otherwise, the index where the value is located.
  *
  * Description: Printing the [sub]array being searched after each change.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
