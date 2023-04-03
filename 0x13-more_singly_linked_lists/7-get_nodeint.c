#include "lists.h"
/**
 * get_nodeint_at_index - function returns  nth node of a listint_t linked list
 * @head: pointer to the listint_t lis
 * @index:  is the index of the node, starting at 0
 * Author Tway
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	return ((count == index) ? current : NULL);
}
