#include "stdio.h"
#include "lists.h"

/**
 * sum_dlistint - sums all  the data of a dlistint_t linked list
 * @head: pointer at the beginning of the linked list
 *
 * Return: sum of all data, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h = head;
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}

	while (h != NULL)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}
