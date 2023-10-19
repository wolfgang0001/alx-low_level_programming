#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: pointer to the list_t
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	int nelts = 0;
	const list_t *head = h;

	while (head != NULL)
	{
		nelts += 1;
		head = head->next;
	}
	return (nelts);
}

