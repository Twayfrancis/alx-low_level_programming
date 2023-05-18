#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at certain
 * index of a list
 * @head: variable pointer to the head
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;
	dlistint_t *next;

	temp = *head;
	if (!head || !(*head))
	{
		return (-1);
	}
	if (!index)
	{
		*head = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		temp->next = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; temp != NULL && i < index - 1; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}
	next = temp->next->next;
	free(temp->next);
	temp->next = next;
	return (1);
}
