#include "stdio.h"
#include "lists.h"

/**
 * add_dnodeint - adding a new node at the beginning of the linked list
 * @head: double pointer at the beginning of the linked list
 * @n: value added to the new node
 *
 * Return: pointer to the new node, or failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (head == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;

	return (new_node);
}
