#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer
 * @idx: index of the list where new node will be added
 * @n:the element to be added
 *
 * Return: address of new node || NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = new_node;
		new_node->next = *h;
		*h = new_node;
	}

	while (count < idx - 1)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (NULL);
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next == new_node)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
