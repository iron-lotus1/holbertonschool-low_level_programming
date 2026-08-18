#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to the head of the doubly linked list.
 * @idx: Index where the new node should be added (starts at 0).
 * @n: Integer data to store in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	/* If inserting at the beginning, use add_dnodeint logic */
	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	/* Traverse to the node right before the target index */
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	/* If index is out of bounds */
	if (temp == NULL)
		return (NULL);

	/* If inserting at the end of the list */
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	/* Insert the node in the middle of the list */
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
