#include "stdio.h"
#include "lists.h"

/**
 * get_dnodeint_at_index - finds any specific node of a linked list
 * @head: pointer at the beginning of the list
 * @index: index of node to retrieve
 *
 * Return: pointer to the indexed node, or failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
