#include "stdio.h"
#include "lists.h"

/**
 * print_dlistint - prints all the element of the  dlistint_t list
 * @h: point to the start of the linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *head = h;

	if (h == NULL)
		return (0);

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		n++;
	}
	return (n);
}
