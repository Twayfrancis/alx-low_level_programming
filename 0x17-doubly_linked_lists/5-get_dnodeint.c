#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head node of the list
 * @index: the index of the node, starting from 0
 * Author Tway
 * Return: pointer to nth node
 * if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;
	/* iterate through the list until you reach the desired node*/
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	/*if the desired  node does not exist, Return NULL*/
	if (current == NULL)
	{
		return (NULL);
	}
	/* at the end return the desired node*/
	return (current);
}
